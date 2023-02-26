
public class Cubo03 {
	
	public static void main (String[] args) {
		
		int cubo[][][] = new int[(int)(Math.random()*10)+1] [(int)(Math.random()*10)+1] [(int)(Math.random()*10)+1];
		
		int valor = 1;
		
		for(int dimensao = 0; dimensao < cubo.length; dimensao++){
		
			for( int linha = 0; linha < cubo[dimensao].length; linha++){
			
				for( int coluna = 0; coluna < cubo[dimensao][linha].length ; coluna++){
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
