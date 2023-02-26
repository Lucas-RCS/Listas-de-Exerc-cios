/*
 * Matriz06.java
 */

import java.util.Scanner;
public class lista1ex6 {
	static Scanner leia = new Scanner (System.in);
	public static void main (String[] args) {
		
		
		
		int linha = validanumero();
		int coluna = validanumero();
		
		System.out.println();
		
		int[][] m1 =  criaMatriz(linha, coluna);
		
		System.out.println();
		
		
		System.out.println();
		int elemento = pedeElemento();
		System.out.println();
		procurarElemento(m1, elemento);
	}
	
	
	
	
	public static int validanumero (){
		int n = 0;
		do {
			
			System.out.print("Digite um valor: ");
			n = leia.nextInt();
			
			if ( n < 1 || n > 25){
				
				System.out.print("Digite um valor: ");
			}
			
			
			
		}while( n < 1 || n >= 25);
		
		return n;
	}
	
	public static int[][] criaMatriz (int linha, int coluna){
		
		int[][] matriz = new int[linha][coluna];
		
		
		for ( int i = 0; i < matriz.length; i++){
			for (int j = 0; j < matriz[i].length; j++){
				matriz[i][j] = (int)(Math.random() * 30)+1;
							
				System.out.print(matriz [i][j] + " ");
				
				
			}
			System.out.println();
			
		}
		
		
		return matriz;
	}
	
		public static int pedeElemento (){
			
		int numeroEscolhido = 0;
		
			System.out.print("Digite um valor para procurar: ");
			numeroEscolhido = leia.nextInt();
					
		return numeroEscolhido;
	}
	
	public static void procurarElemento(int[][] matriz, int elemento ){
		int cont = 0;
		
		for ( int i = 0; i < matriz.length; i++){
			for (int j = 0; j < matriz[i].length; j++){
				
				if( elemento == matriz[i][j] ){
					System.out.println("Elemento encontrado na linha " +  (i+1) + " e na coluna " + (j+1));
					cont++;
				}		
			}
			System.out.println();
		}
		System.out.println("Foi encontrado o elemento " + cont + " vezes" ); 
	}
}

