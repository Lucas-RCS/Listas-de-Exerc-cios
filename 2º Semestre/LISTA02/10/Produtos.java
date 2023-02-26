/*
 * número do pedido, código do produto,quantidade e valor total da compra
 */


public class Produtos {
	
	public static void main (String[] args) {
		int numeroPedido;
		byte codigoProd;
		int quanti;
		double valorCompra;
		
		numeroPedido = 1212;
		codigoProd = 55;
		quanti = 5;
		valorCompra = 98.45D;
		
		System.out.println("Numero do Pedido: " + numeroPedido);
		System.out.println("\nCódigo do produto: " + codigoProd);
		System.out.println("\nQuantidade: " + quanti);
		System.out.printf("\n Valor do Produto: %f", valorCompra);
	}
}

