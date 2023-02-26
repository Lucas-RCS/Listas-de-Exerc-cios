/*
 */
import java.util.Scanner;

public class Matrizlista {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner ( System.in);
		
		int linha, colunas, maximo;
		
		do{
		
				System.out.print("Entre com a quantidade de linhas: ");
				linha = leia.nextInt();
				
				if( linha < 3 ){
					System.out.println("\n\t Linha tem que ser menor que ZERO!\n");
					}
		}while( linha < 1 );
		
		do{
		
				System.out.print("Entre com a quantidade de colunas: ");
				colunas = leia.nextInt();
				
				if( colunas < 3 ){
					System.out.println("\n\t Coluna tem que ser maior que ZERO!\n");
					}
		}while( colunas < 1 );
		
		int [][] D = new int [ linha ] [ colunas ];
		
		do{
		
				System.out.print("Entre com a quantidade de elementos maximos: ");
				maximo = leia.nextInt();
				
				if( maximo < 1 ){
					System.out.println("\n\t Coluna tem que ser maior que ZERO!\n");
					}
		}while( maximo < 1 );
		
		for( int i = 0; i < D.length; i++ ){
			for(int j = 0; j < D[i].length; j++){
				D[i][j] = (int)(Math.random()* maximo) + 1;
				
				System.out.print( D[i][j] + " ");
				}
				System.out.println();
			}
	}
}

