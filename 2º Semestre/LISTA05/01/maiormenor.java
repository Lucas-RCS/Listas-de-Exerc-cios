/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class maiormenor {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		System.out.print("Digite um numero?\n ");
		int a = leia.nextInt();
		
		if(a>10){
			System.out.println("Maior que 10");
		}else{
			System.out.println("Nao e maior que 10");
			}
		
	}
}

