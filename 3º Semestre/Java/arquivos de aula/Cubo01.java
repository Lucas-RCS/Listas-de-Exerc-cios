
public class Cubo01 {
	
	public static void main (String[] args) {
		
		int cubo[][][] = new int[3][3][3];
		
		int valor = 1;
		
		for(int dimensao = 0; dimensao < 3; dimensao++){
		
			for( int linha = 0; linha < 3; linha++){
			
				for( int coluna = 0; coluna < 3 ; coluna++){
					cubo[dimensao] [linha] [coluna] = valor++;
					
					System.out.print( cubo[dimensao] [linha] [coluna] + " ");
					
				}
				System.out.println();
			}	
			;
			System.out.println();
		}
		
	}
}
