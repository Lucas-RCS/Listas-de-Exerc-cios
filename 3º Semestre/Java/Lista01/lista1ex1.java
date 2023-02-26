/*
 * 1) Escreva um programa em Java para
ler uma matriz A de 4 linhas por 5 colunas e
imprimir seus elementos
*/
import java.util.Scanner;

public class lista1ex1 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[][] a = new int[4][5];
        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a[i].length; j++) {
                System.out.printf("[%d][%d] = ", i, j);
                a[i][j] = sc.nextInt();
            }
        }

        System.out.println("Matriz Criada:");
        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a[i].length; j++) {
                System.out.printf("%d ", a[i][j]);
            }
            System.out.println();
        }
    }

}
