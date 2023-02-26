/*
2) Escreva um programa em Java para
geral aleatoriamente os elementos
(menor que 100) de uma matriz B de 6 linha por 3 colunas, imprimir a matriz
gerada e imprimir a matriz em ordem invertida.
*/
import java.util.Random;

public class lista1ex2 {
    
    public static void main(String[] args) {
        int b[][] = new int[6][3];
        Random gerador = new Random();
        System.out.println("Matriz:");
        for(int i = 0; i < b.length; i++) {
            for(int j = 0; j < b[i].length; j++) {
                b[i][j] = gerador.nextInt(100);
                System.out.printf("%d ", b[i][j]);
            }
            System.out.println();
        }

        System.out.println("Matriz invertida:");
        for(int i = b.length - 1; i >= 0; i--) {
            for(int j = b[i].length - 1; j >= 0; j--) {
                System.out.printf("%d ", b[i][j]);
            }
            System.out.println();
        }
    }

}
