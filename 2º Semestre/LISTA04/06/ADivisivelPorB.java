/*
 * 
 */
import java.util.Scanner;
import java.util.Random;


public class ADivisivelPorB {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int a = 0;
		System.out.println("Entre com o primeiro valor : ");
        a = leia.nextInt();
        
       int b = 0;
		System.out.println("Entre com o segundo valor : ");
        b = leia.nextInt();
        
        if (a>=1002){
		System.out.println("Primeiro Valor Invalido");
		}else if(b>=22){
		System.out.println("Segundo Valor Invalido");	
		}else if(a % b == 0){
		System.out.println("Divisivel");
		}else{
			System.out.println("Nao e divisivel");
			}
	}
}

