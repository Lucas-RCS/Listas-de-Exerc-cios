/*

 */

import java.util.Random;
public class AprovadoReprovadoRandom {
	
	public static void main (String[] args) {
		Random a = new Random();
		int valor = a.nextInt(11);		
        System.out.println(valor);
        if(valor <=5 ){
			System.out.println("REPROVADO");
		}else if(valor >= 6){
			System.out.println("APROVADO");
		}
	}
}

