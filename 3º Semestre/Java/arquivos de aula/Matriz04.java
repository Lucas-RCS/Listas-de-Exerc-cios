/*
 */

public class Matriz04 {
	
	public static void main (String[] args) {
		
		int[][] m1 = new int[5][0]; // ?? elementos
		
		for( int linha = 0; linha < m1.length; linha++){
			m1[linha] = new int [(int)(Math.random()*10)+1];
			}
		
		for ( int linha = 0; linha < m1.length; linha++) {
			for ( int coluna = 0; coluna < m1[linha].length; coluna++){		
			System.out.print( m1[linha][coluna] + " " ); 
			}
		System.out.println();
		}		
	}
}
