/*Simulando minha cafeteria
*/

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    int qtd,op;
    float totalCompra;
    
    do{
    
    printf("\n************BEM VINDO AO ROCK VEGAN CAFÉ************\n\n");
    
    printf("1 - Café com leite vegano   |Preço: R$4.50  Código 100\n");
    printf("2 - Chá                     |Preço: R$3.50  Código 200\n");
    printf("3 - Pastel de palmito       |Preço: R$5.50  Código 300\n");
    printf("4 - Pedaço de Bolo          |Preço: R$9.00  Código 400\n");
    printf("5 - Pedaço de Bolo Salgado  |Preço: R$7.00  Código 500\n");
    printf("6 - Pão na chapa            |Preço: R$3.50  Código 600\n");
    printf("7 - 5 Pão de beijo          |Preço: R$10.00 Código 700\n");
    printf("**********  Ao encerrar o pedido digite 0 ***********\n");
    printf("***** Por favor, digite o código do seu pedido  ******\n\n");
    printf("-->");
    scanf("%d",&op);
    
   
    //Limpa a tela
    system("clear||cls");
    
     switch(op)
    {
    
    
    case 100: printf("Café com leite vegano\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*4.5;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break;
              
    case 200: printf("Chá\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*3.5;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break;
              
    case 300: printf("Pastel de palmito\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*5.5;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break;    
              
    case 400: printf("Pedaço de Bolo \n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*9.0;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break;
              
    case 500: printf("Pedaço de Bolo Salgado\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*7.0;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break; 
              
    case 600: printf("Pão na chapa\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*3.50;
              printf("Valor da Compra: %.2f\n",totalCompra);
              break;
              
    case 700: printf("5 Pão de beijo\n Por favor,digite a quantidade:\n");
              scanf("%d",&qtd);
              totalCompra+=qtd*10.00;
              printf("Valor da Compra: %.2f \n",totalCompra);
              break;       
              
    case 0: printf("Obrigado por comprar conosco!Volte sempre!\n\n");
    break;
    default: printf("Opção Inválida\n\n\n");
    break;
    
    }
    }while(op!=0);
        printf("Total da sua compra é:%.2f \n\n",totalCompra);
}
    
      


