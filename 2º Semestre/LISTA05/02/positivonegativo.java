/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class positivonegativo {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		System.out.print("Digite um numero?\n ");
		int a = leia.nextInt();
		
		if(a>=0){
			System.out.println("positivo");
		}else{
			System.out.println("Negativo");
			}
		
	}
}
