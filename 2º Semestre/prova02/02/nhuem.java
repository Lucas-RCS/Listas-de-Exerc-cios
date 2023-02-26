/*
 * 
 */
import java.util.*;
import java.util.Scanner;
import java.util.Random;
import java.lang.Math;
public class nhuem {
	
	public static void main (String[] args) {
		
		int a, b, c;
		double delta, x1, x2;
		 int vetor[];
		
		Scanner leia = new Scanner(System.in);
		System.out.print("Qual o seu Nome?\n ");
		String nome = leia.next();
		
		System.out.print("Sr(a)." + nome + " Deseja resolver uma conta? (S/N)\n ");
		String sn = leia.next();
		
		 if (sn.equals("S") ||  sn.equals("s")){
            System.out.print("Qual o tipo de conta deseja? \n");
            System.out.print("1 - SOMA \n");
            System.out.print("2 - SUBTRACAO \n");
            System.out.print("3 - DIVISAO \n");
            System.out.print("4 - MULTIPLICACAO \n");
            System.out.print("5 - BHASKARA \n");
            System.out.print("6 - FIBONACCI \n");
            System.out.print("7 - POTENCIACAO \n");
            System.out.print("8 - NUMEROS PRIMOS \n");
            System.out.print("9 - TABUADA \n"); 
            System.out.print("10 - ROLAGEM DE DADOS \n\n");             
            int t = leia.nextInt(); 
           
           
           switch(t){
			   case 1:
			   System.out.print("\n \nInsira valor de A: ");
			   int as = leia.nextInt();
			   System.out.print("\n Insira valor de B: ");
			   int bs = leia.nextInt();
			   
			   int rs = as+bs;
			   System.out.println("Resultado: " + rs);
			   break;
			   
			   
			case 2:
			   System.out.print("\n \nInsira valor de A: ");
			   int asu = leia.nextInt();
			   System.out.print("\n Insira valor de B: ");
			   int bsu = leia.nextInt();
			   
			   int rsu = asu-bsu;
			   System.out.println("Resultado: " + rsu);
			   
			   break;
			   
			case 3:
				System.out.print("\n \nInsira valor de A: ");
				int ad = leia.nextInt();
				System.out.print("\n Insira valor de B: ");
				int bd = leia.nextInt();
			   
				int rd = ad/bd;
				System.out.println("Resultado: " + rd);
				   
				   
				   break;
				   
			case 4:
				System.out.print("\n \nInsira valor de A: ");
				int am = leia.nextInt();
				System.out.print("\n Insira valor de B: ");
				int bm = leia.nextInt();
			   
				int rm = am*bm;
				System.out.println("Resultado: " + rm);
				   
				   break;
				   
			case 5:
					   System.out.println("Digite o valor de A, B e C respectivamente: ");
					   System.out.println("A: ");
						a = leia.nextInt();
						System.out.println("B: ");
						b = leia.nextInt();
						System.out.println("C: ");
						c = leia.nextInt();
						
						 delta = (b * b) + (-4 * (a * c));
						System.out.println("Delta: " + delta);
							if (delta >= 0) {
							x1 = (double) ((-(b) + Math.sqrt(delta)) / 2 * a);
							System.out.println("X1: " + x1);
							x2 = (double) ((-(b) - Math.sqrt(delta)) / 2 * a);
							System.out.println("X2: " + x2);
							} else {
								System.out.println("Delta nao possui raiz!");
								System.exit(0);
							}
						
						break;
						
				case 6:
							System.out.print("\n \nInsira valor de A: ");
							int af = leia.nextInt();
							System.out.print("\n Insira valor de B: ");
							int bf = leia.nextInt();
							
							vetor = new int[(bf)];
							vetor[0] = 0;
							vetor[1] = 1;
							
							for (int qt = 2; qt < (bf); qt++) {
							vetor[qt] = vetor[qt-1] + vetor[qt-2];
								if (qt == (bf-1)){
									for (int q = (bf-1); q > (af-2); q--) {
									System.out.print(vetor[q] + " ");
									}
										} else {
											continue;
											}
								}
							
							break;
							
					case 7:
							System.out.print("\n \nInsira valor da BASE: ");
							int ap = leia.nextInt();
							System.out.print("\n Insira valor da POTENCIA: ");
							int bp = leia.nextInt();
							int valor = 1;
							
							if(ap > 0 && bp==0){
								System.out.println(valor);
							}
							else if(ap == 0 && bp>=1){
								System.out.println(0);
							}
							else{
								System.out.println("\n "+ap+"^"+bp+"="+Math.pow(ap,bp));
								}
						
							break;
					
					case 8:
								 System.out.println("\nEntre com um numero ");
								int num = leia.nextInt();
								for(int i = 1;i<=num;i++) {
								boolean primo = true;        
								for(int j = 2; j < i; j++) {            
									if(i % j == 0) {
										primo = false;
									}
								}
								if(primo) {
									System.out.println("-> "+i);
								}   
							}
							
							break;
							
					case 9:
					int numero,produto;
					
					System.out.println("\nEntre com a tabuada desejada: ");
					int num2 = leia.nextInt();
					
					numero = 0;
					while( numero<=10 ){
						produto = num2 * numero;
						System.out.println(num2 +" X "+ numero++ + " = "+ produto);
				
						}
					break;
				
				case 10:
					System.out.println("--- ROLAGEM DE DADOS ---");
					System.out.println(" Qual o tipo de dado?");
					System.out.println(" -> D4");
					System.out.println(" -> D6");
					System.out.println(" -> D8");
					System.out.println(" -> D10");
					System.out.println(" -> D12");
					System.out.println(" -> D20");
					System.out.println(" -> D100");
					String dd = leia.next();
					if (dd.equals("D4") ||  dd.equals("d4")){
						Random dado = new Random();
						int vdado = dado.nextInt(5+1);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D6") ||  dd.equals("d6")){
						Random dado = new Random();
						int vdado = dado.nextInt(7);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D8") ||  dd.equals("d8")){
						Random dado = new Random();
						int vdado = dado.nextInt(9);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D10") ||  dd.equals("d10")){
						Random dado = new Random();
						int vdado = dado.nextInt(11);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D12") ||  dd.equals("d12")){
						Random dado = new Random();
						int vdado = dado.nextInt(13);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D20") ||  dd.equals("d20")){
						Random dado = new Random();
						int vdado = dado.nextInt(21);
						
						System.out.println("\nDADO : "+vdado);
						
					}else if (dd.equals("D100") ||  dd.equals("d100")){
						Random dado = new Random();
						int vdado = dado.nextInt(101);
						
						System.out.println("\nDADO : "+vdado);
						
					}else{
						System.out.println("VALOR INVALIDO");
						}
					break;
				
				default:
				System.out.println("Valor invalido");
				
		}
    } else if (sn.equals("N") || sn.equals("n")){
                System.out.println("Ok, Programa Finalizado");
        } else {
            System.out.println("Nao e um valor valido");
        }
	
}
}
