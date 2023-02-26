/*
 * 
 */

import java.util.Scanner;
import java.util.Random;
public class Saudacao {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		System.out.print("Qual o horario? ");
	int hora = leia.nextInt();
	if(hora>=0 && hora<=6){
		System.out.println("Zzzzz");
	} else if(hora>=7 && hora<=11){
		System.out.println("Bom dia");
	}else if(hora>=12&&hora<=17){
		System.out.println("Boa tarde");
	}else if(hora>=18&&hora<=23){
		System.out.println("Boa Noite");
	}
	}
}

