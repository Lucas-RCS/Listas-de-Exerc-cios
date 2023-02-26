/*
 */

public class Matriz05 {
	
	public static void main (String[] args) {
		int elementos = 0;
		int[][] m1 = new int[(int)(Math.random()*10)+1][]; // ?? elementos
		
		for( int linha = 0; linha < m1.length; linha++){
			m1[linha] = new int [(int)(Math.random()*10)+1];
			
			elementos += m1[linha].length;
			}
		
		for ( int linha = 0; linha < m1.length; linha++) {
			for ( int coluna = 0; coluna < m1[linha].length; coluna++){		
			System.out.print( m1[linha][coluna] + " " ); 
			}
		System.out.println();
		}		
		
		System.out.println("\nTotal de elementos: " + elementos );
	}
}
