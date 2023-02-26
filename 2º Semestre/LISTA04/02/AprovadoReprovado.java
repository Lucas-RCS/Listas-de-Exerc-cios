/*
 * 
 */
import java.util.Scanner;
import java.util.Random;
public class AprovadoReprovado {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		int a = 0;
		
		
		System.out.print("Entre com o valor da nota : ");
		a = leia.nextInt();
		if(a>=11){
			System.out.println("VALOR INVALIDO");
		}else if(a <=5 ){
			System.out.println("REPROVADO");
		}else if(a >= 6){
			System.out.println("APROVADO");
		}
	}
}

