/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class operacaorio {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int h;

		System.out.print("A: \n ");
		int a = leia.nextInt();
		
		System.out.print("B: \n ");
		int b = leia.nextInt();
		
		System.out.print("escolha um operador: \n ");
		System.out.print("'+', '-', '*', '/': \n ");
		String c = leia.next();
			
			switch(c){
				
				case "+":
				h=a+b;
				System.out.println("Soma :"+h);
				break;
				
				case "-":
				h=a-b;
				System.out.println("Subtraçao :"+h);
				break;
				
				case "*":
				h=a*b;
				System.out.println("Multiplicacao :"+h);
				break;
				
				case "/":
				h=a/b;
				System.out.println("Divisao :"+h);
				break;
			
			}
		
	}
}

