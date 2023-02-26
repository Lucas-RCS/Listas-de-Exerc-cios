/*
 */
import java.util.Scanner;
import java.util.Random;

public class VerificaValorProduto {
	
	public static void main (String[] args) {
	Scanner leia = new Scanner(System.in);
	int a = 0;
	System.out.println("Entre com o valor do primeiro produto : ");
		a = leia.nextInt();
	
	int b = 0;
	System.out.println("Entre com o valor do segundo produto : ");
		b = leia.nextInt();
		if(a >= 1001){
			System.out.println("Valor do primeiro produto Invalido");
		}else if (b>=1001){
			System.out.println("Valor do segundo produto Invalido");
		}else if(a < b){
			System.out.println("O produto 1 e o mais barato");
		}else if(b < a){
			System.out.println("O produto 2 e o mais barato");
		}else if(a == b){
			System.out.println("Os preços dos dois produtos são iguais");
		}
}
}
