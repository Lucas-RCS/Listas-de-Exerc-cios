/*
 * 
 */

import java.util.Scanner;
public class aaa {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
	int primeiroTermo, segundoTermo, proximoTermo;
		
		int termosIncial = 0;
		int termosFinal  = 0;
		int termo        = 0;
		
		System.out.print("Entre com o termo inicial: ");
		termosIncial = leia.nextInt();

		System.out.print("Entre com o termo final: ");
		termosFinal = leia.nextInt();		
		
		primeiroTermo = 0;
		segundoTermo  = 1;
			
		while ( termo < termosFinal ) {
			
			if ( termo >= termosIncial - 1 ) {
				System.out.print( primeiroTermo + " " );
			}
			
			termo++;
			
			proximoTermo  = primeiroTermo + segundoTermo;
			primeiroTermo = segundoTermo;
			segundoTermo  = proximoTermo;
}
}
}
