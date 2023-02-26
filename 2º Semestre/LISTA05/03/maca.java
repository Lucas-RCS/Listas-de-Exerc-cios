/*
 * 
 */

import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class maca {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		System.out.print("Quantas macas compradas ?\n ");
		int a = leia.nextInt();
		double r;
		if(a<=11){
			r=a*1.30;
			System.out.println("Valor : $"+r);
			}else if(a>=12){
				r=a*1.00;
				System.out.println("Valor : $"+r);
				}
	}
}

