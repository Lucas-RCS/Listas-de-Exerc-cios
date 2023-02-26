/*
 */

public class Matriz02 {
	
	public static void main (String[] args) {
		
		int[][] m1 = new int[4][4]; // 16 elementos
		for ( int linha = 0; linha < m1.length; linha++) {
			
			for ( int coluna = 0; coluna < m1[linha].length; coluna++){
			
			System.out.print( m1[linha][coluna] + " " ); 
			}
		System.out.println();
		}
		
		
	}
}

