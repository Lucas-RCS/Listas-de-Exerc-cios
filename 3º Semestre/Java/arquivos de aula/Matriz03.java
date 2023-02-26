/*
 */

public class Matriz03 {
	
	public static void main (String[] args) {
		
		int[][] m1 = new int[5][0]; // ?? elementos
		
		m1[0] = new int [2];
		m1[1] = new int [4];
		m1[2] = new int [3];
		m1[3] = new int [7];
		m1[4] = new int [3];
		
		for ( int linha = 0; linha < m1.length; linha++) {
			for ( int coluna = 0; coluna < m1[linha].length; coluna++){		
			System.out.print( m1[linha][coluna] + " " ); 
			}
		System.out.println();
		}		
	}
}

