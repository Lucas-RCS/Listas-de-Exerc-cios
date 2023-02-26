/*
 * 
 */

import java.util.Arrays;  
public class Metodo10 {
	
	public static void main (String[] args) {
		int a = 2;
		int	b = 3;
		
		int[] resposta = somaProduto (a, b);
		
		System.out.println("Resposta:" + Arrays.toString(resposta));
       
  }
        
	static int[] somaProduto(int valor01, int valor02){
		int calculo[] = new int [2];
		calculo [0] = valor01 + valor02;
		calculo [1] = valor01 * valor02;
		
		return calculo;
	}

}
