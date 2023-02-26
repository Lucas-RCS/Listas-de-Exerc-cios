/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class vendedor {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		double h;
		double x;
		System.out.print("salario fixo: \n ");
		int a = leia.nextInt();
		
		System.out.print("valor das vendas: \n ");
		int b = leia.nextInt();
		
		if(b>1500){
			h=b*0.05;
			x=a+h;
			
			System.out.println("Salario total:"+x);
			}else{
				h=b*0.03;
				x=a+h;
				System.out.println("Salario total:"+x);
				}
		
	}
}

