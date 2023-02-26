/*
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;


public class crescente {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		System.out.print("Valor 1 \n ");
		int a = leia.nextInt();
		
		System.out.print("Valor 2 \n ");
		int b = leia.nextInt();
		
		if(a<b){
			System.out.println(""+a+" "+b);
			}else{
				System.out.println(""+b+" "+a);
				}
	}
}

