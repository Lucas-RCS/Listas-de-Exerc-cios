import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;

public class datas {
	
	public static void main (String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int c;
		
		System.out.print("Ano atual: \n ");
		int a = leia.nextInt();
		
		System.out.print("Ano de nascimento: \n ");
		int an = leia.nextInt();
		
		c=a-an;
		
		if(c>=18){
			System.out.println("voce tem "+c+" anos e pode votar");
			}else {
				System.out.println("voce tem "+c+" anos e nao pode votar");
				}
}
}
