/*
 * 
 */

import java.util.Scanner;
public class bbb {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
	int numero = 1;
		int soma    = 1;
		int termo   = 0;
		
		int termoInicial = 0;
		int termoFinal   = 0;
		
		System.out.print("Entre com o termo inicial: ");
		termoInicial = leia.nextInt();

		System.out.print("Entre com o termo final: ");
		termoFinal = leia.nextInt();	
		
		numero = termoInicial;	

		while ( numero <= termoFinal ) {
			
			soma = 1;
			
			for ( int i = (numero/2) ; i > 1  ; i-- ) {
				if ( numero % i == 0 ) {
					soma += i;
					if ( soma > numero ) {
						break;
					}
				}
			}
			
			if ( soma == numero ) {
				if ( numero >= termoInicial ) {
					System.out.print( numero + " " );
				}
				termo++;
			}
			
			numero++;		
		}
}
}
