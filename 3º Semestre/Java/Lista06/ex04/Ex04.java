import java.util.Scanner;

public class Ex04 {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        Numero numero = new Numero();
        System.out.print("Digite um valor: ");
        int valor = sc.nextInt();

        numero.setNumero(valor);
        System.out.println("Numero: " + numero.getNumero());
        System.out.println("Numero invertido: " + numero.inverterNumero());
    }
    
}
