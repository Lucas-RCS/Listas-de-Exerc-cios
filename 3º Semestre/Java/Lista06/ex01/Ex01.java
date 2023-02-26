public class Ex01 {

    public static void main(String[] args) throws Exception {
        Pessoa pessoa = new Pessoa();

        pessoa.setNome("Lucas");
        pessoa.setIdade(19);
        pessoa.setAltura(1.83);
        System.out.println("Nome: " + pessoa.getNome());
        System.out.println("Idade: " + pessoa.getIdade());
        System.out.println("Altura: " + pessoa.getAltura());
        pessoa.fazerAniversario();
        System.out.println("Nova idade: " + pessoa.getIdade());
    }
    
}

