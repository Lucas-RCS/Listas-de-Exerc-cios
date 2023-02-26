import java.util.Scanner;

public class lista2ex1 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero: ");
        double numero = sc.nextDouble();
        sc.close();
        System.out.println(numero + " e positivo? " + (isPositivo(numero) ? "Sim" : "Nao"));
    }

    private static boolean isPositivo(double numero) {
        if(numero >= 0) {
            return true;
        }
        return false;
    }

}
