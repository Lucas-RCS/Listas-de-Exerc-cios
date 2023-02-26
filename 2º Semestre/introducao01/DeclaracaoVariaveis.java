/*
 * DeclaracaoVariaveis.java
 * 
 * Copyright 2021 Cliente <Cliente@LUCASRIBEIRO>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

public class DeclaracaoVariaveis {
	
	public static void main (String[] args) {
		
		String nome;
		String dataNascimento, rg;
		String sexo = "M";
		
		double salario;
		
		nome = "Joseverson Moralez";
		dataNascimento = "08 de setembro de 1959";
		rg = "16.123.158-7";
		salario = 2147.79;
		
		System.out.print( "O(A) senhor(a) " + nome + 
		" portador(a) do RG numero " + rg +  ", nascido em "
		 + dataNascimento + " do sexo " + sexo + 
		 ", esta registrado com o salario de R$" + salario);
		 
		 System.out.println(">>>");
		 
		
	}
}

