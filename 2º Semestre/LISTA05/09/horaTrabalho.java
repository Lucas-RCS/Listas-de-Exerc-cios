/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;


public class horaTrabalho {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int h;
		int x;
		int f;
		int l;
		System.out.print("Horas trabalhadas em um mes: \n ");
		int a = leia.nextInt();
		
		System.out.print("Salario por hora: \n ");
		int b = leia.nextInt();
		
		if(a<=40){
			h=b*a;
			System.out.println("Salario por mes:"+h);
			}else if(a>40){
				x=b/2;
				f=b+x;
				l=f*a;
				System.out.println("Salario por mes com horas extras:"+ l);
				}
	}
}

