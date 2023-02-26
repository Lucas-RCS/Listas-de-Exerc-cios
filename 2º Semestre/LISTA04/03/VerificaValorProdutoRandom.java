/*
 * 
 */

import java.util.Random;
public class  VerificaValorProdutoRandom {
	
	public static void main (String[] args) {
		Random precoProduto1 = new Random();
		int valor = precoProduto1.nextInt(1001);
        System.out.println("Produto 1: $"+valor);
        
        Random precoProduto2 = new Random();
        int valor2 = precoProduto2.nextInt(1001);	
        System.out.println("Produto 2: $"+valor2);
        
        if(valor < valor2){
		System.out.println("O produto 1 e o mais barato");
		}else if(valor2 < valor){
		System.out.println("O produto 2 e o mais barato");
		}else if(valor == valor2){
		System.out.println("Os preços dos dois produtos são iguais");
		}
		
	}
}

