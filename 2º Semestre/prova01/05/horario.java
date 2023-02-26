/*
 * 
 */

import java.util.Scanner;
public class horario {
	
	public static void main (String[] args) {
	Scanner leia = new Scanner(System.in);
	
	System.out.print("Qual o horario? ");
	int h = leia.nextInt();
	if(h>=0 && h<=6){
		System.out.println("Zzzzz");
	} else if(h>=7 && h<=11){
		System.out.println("Bom dia");
	}else if(h>=12&&h<=17){
		System.out.println("Boa tarde");
	}else if(h>=18&&h<=23){
		System.out.println("Boa Noite");
	}
}
}
