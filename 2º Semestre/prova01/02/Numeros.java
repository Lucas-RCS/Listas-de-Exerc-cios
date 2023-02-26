public class Numeros {
    public static void main(String args[]) {
        int c = 2;
        for (int a = 1; a <= 10; a++){
            System.out.print("\n" + a + ", ");
            if (a % 2 == 0){
                for (int b = 1; b <= (a-1); b++){
                    System.out.print(b);
                }
            } else {
                for (int b = c; b <= 10; b++){
                    System.out.print(b);
                }
                c+=2;
            }
        }
    }
}
