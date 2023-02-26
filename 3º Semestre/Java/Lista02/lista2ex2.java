import java.util.Scanner;

public class lista2ex2 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero: ");
        double numero = sc.nextDouble();
        sc.close();
        System.out.println(numero + " e zero? " + (isZero(numero) ? "Sim" : "Nao"));
    }

    private static boolean isZero(double numero) {
        if(numero == 0) {
            return true;
        }
        return false;
    }

}
