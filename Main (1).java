/****************Code Girls - Exercício 1 calculadora criando Método**************************************/

public class Main
{
	public static void main(String[] args) {
	    System.out.println("Testando Métodos");
	   	    soma(3,6);
	   	    subtracao(9,1.8);
	   	    multiplicacao(7,8);
	   	    divisao(5,2.5);
	   	    
	}
	
	//Criando métodos
	public static void soma(double numero1, double numero2){
	    double resultado = numero1+numero2;
	    System.out.println("A soma do " +numero1+ " mais " +numero2+" é "+resultado);
	}
	 public static void subtracao(double numero1,double numero2){
	     double resultado = numero1-numero2;
	     System.out.println("A subtracao do " +numero1+ " menos " +numero2+" é "+resultado);
	 }
	 public static void multiplicacao(double numero1,double numero2){
	     double resultado= numero1*numero2;
	     System.out.println("A multiplicação do " +numero1+ " pelo " +numero2+" é "+resultado);
	 }
	 public static void divisao(double numero1,double numero2){
	     double resultado=numero1/numero2;
	     System.out.println("A divisão do " +numero1+ " pelo " +numero2+" é "+resultado);
	 }
	 
}

