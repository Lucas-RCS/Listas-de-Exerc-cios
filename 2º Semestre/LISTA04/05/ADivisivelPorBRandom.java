/*
 * 
 */
import java.util.Scanner;
import java.util.Random;

public class  ADivisivelPorBRandom {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		Random a = new Random();
		int valor = a.nextInt(1001);
        System.out.println(valor);
        
        Random b = new Random();
        int valor2 = b.nextInt(21);	
        System.out.println(valor2);
        
        if (valor % valor2 == 0){
		System.out.println("Divisivel");
		}else{
			System.out.println("Nao e divisivel");
			}
	}
}

