import java.util.Scanner;
public class Fibonacci {
    public static void main(String args[]) {
        Scanner leia = new Scanner(System.in);
        int vetor[];
        System.out.print("Termo inicial: ");
        int t1 = leia.nextInt();
        System.out.print("Termo final: ");
        int t2 = leia.nextInt();
        vetor = new int[(t2)];
        vetor[0] = 0;
        vetor[1] = 1;
        for (int qt = 2; qt < (t2); qt++) {
            vetor[qt] = vetor[qt-1] + vetor[qt-2];
            if (qt == (t2-1)){
                for (int q = (t2-1); q > (t1-2); q--) {
                    System.out.print(vetor[q] + " ");
                }
            } else {
                continue;
            }
        }

    }
}
