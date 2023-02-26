import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;


public class frete {
	
	public static void main (String[] args) {
		
		double f;
		double vf;

		Scanner leia = new Scanner(System.in);
		System.out.print("Qual o codigo ?\n ");
		int codigo = leia.nextInt();
		
		System.out.print("Qual o preco ?\n\n ");
		double preco = leia.nextDouble();
		
		switch(codigo){
			
			case 1:
			f=preco*0.10;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tNorte = " + preco +"\t10% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 2:
				f=preco*0.03;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tSul = " + preco +"\t3% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 5:
				f=preco*0.03;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tSul = " + preco +"\t3% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 9:
				f=preco*0.03;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tSul = " + preco +"\t3% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 3:
				f=preco*1.2;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tLeste = " + preco +"\t1,2% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 7:
				f=preco*7.3;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tOeste = " + preco +"\t7,3% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			case 20:
				f=preco*7.3;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tOeste = " + preco +"\t7,3% = "+ f);
			System.out.println(" Valor total = "+vf);
			break;
			
			default :
			f=preco*22.2;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t\t Frete");
			System.out.println(" " + codigo + "\t\t\t\tImportado = " + preco +"\t22,2% = "+ f);
			System.out.println(" Valor total = "+vf);
	}
	if(codigo>=10 && codigo<=15){
			f=preco*1.2;
			vf=preco+f;
			System.out.println(" Codigo de origem \t Regiao procedencia \t Frete");
			System.out.println(" " + codigo + "\t\t\t\tLeste = " + preco +"\t1,2% = "+ f);
			System.out.println(" Valor total = "+vf);
				}
}
}
