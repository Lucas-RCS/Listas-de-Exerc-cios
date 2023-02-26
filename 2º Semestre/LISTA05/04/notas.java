/*
 * 
 */

import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class notas {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		int r;
		int r2;
		System.out.print("Nota 1: ?\n ");
		int a = leia.nextInt();
		
		System.out.print("Nota 2: ?\n ");
		int b = leia.nextInt();
		r=a+b;
		r2 = r/2;
		if(r2>=6){
			System.out.println("Aluno aprovado");
			}else {
				System.out.println("Aluno reprovado");
				}
	}
}

