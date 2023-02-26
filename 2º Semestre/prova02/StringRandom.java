/*
 * 
 */
import java.util.Random;
public class StringRandom {
	
	public static void main (String[] args) {
		
		Random a = new Random();
		int valor = a.nextInt(2);
		for (int i = 0; i < 1; i++){		
        System.out.print(valor);
	}
}
}
