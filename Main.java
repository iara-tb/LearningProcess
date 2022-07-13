
	/**********************Calculadora usando do-while e switch****************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		double resultado,numero1,numero2;
		int opcao;
		
		do{
		System.out.println("Informe qual operação matemática você deseja executar:\n");
		System.out.println("Clique 1 para soma.\n");
		System.out.println("Clique 2 para subtração.\n");
		System.out.println("Clique 3 para multiplicação.\n");
		System.out.println("Clique 4 para divisão.\n");
		System.out.println("Clique 0 interromper calculadora.\n");
		Scanner resposta = new Scanner(System.in);
		opcao=resposta.nextInt();
		
		
		switch(opcao){
		    case 1:System.out.println("Você escolheu soma.\nAgora informe os números que deseja somar.");
		    	    numero1=resposta.nextDouble();
		      
		            numero2= resposta.nextDouble();
		            resultado=numero1+numero2;
		            System.out.println("O resultado da soma do "+numero1+" mais "+numero2+" é igual "+resultado+"\n");
		    break;
		    
		    case 2:System.out.println("Você escolheu subtração.\nAgora informe os números que deseja subtrair.");
		    	    numero1=resposta.nextDouble();
		    
		            numero2= resposta.nextDouble();
		            resultado=numero1-numero2;
		    	   System.out.println("O resultado da subtração do "+numero1+" menos "+numero2+" é igual "+resultado+"\n");
		    break;
		    
		    case 3:System.out.println("Você escolheu multiplicação.\nAgora informe os números que deseja multiplicar.");
		    	    numero1=resposta.nextDouble();
		    
		            numero2= resposta.nextDouble();
		            resultado=numero1*numero2;
		           System.out.println("O resultado da multiplicação do "+numero1+" pelo "+numero2+" é igual "+resultado+"\n");
		    break;
		    
		    case 4:System.out.println("Você escolheu divisão.\nAgora informe os números que deseja dividir.");
		    	    numero1=resposta.nextDouble();
		    
		            numero2= resposta.nextDouble();
		            resultado=numero1/numero2;
		            System.out.println("O resultado da divisão do "+numero1+" pelo "+numero2+" é igual "+resultado+"\n");
		    break;
		    
		}
		
}while(opcao!=0);
}
}
