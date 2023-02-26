/*
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;


public class xadrez {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int th;
		int h;
		System.out.print("hora inicio : \n ");
		int a = leia.nextInt();
		
		System.out.print(" hora termino : \n ");
		int b = leia.nextInt();
		
		th=a+b;
		h=th/60;
		System.out.print("\n" + h);
	}
}

