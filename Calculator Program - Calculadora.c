/* calculator Program - Calculadora
*/

#include <stdio.h>

int main()
{
    float num1,num2;
    char choice;
    
    printf("Enter your choice:\n");
    printf(" a -  Addition. \n b - Subtraction.\n c - Multiplication.\n d - Division.\n");
    scanf("%c",&choice);
    
   
        printf("Enter the first numbers:\n");
        scanf("%f",&num1);
        printf("Enter de second number:\n");
        scanf("%f",&num2);
    
    
    

    switch (choice)
    {//I used  '%0.2f' to display only 2 numbers after the dot//
        case 'a': printf("\n%0.2f + %0.2f = %0.2f\n",num1,num2,(num1+num2));
        break;
        
        case 'b': printf("\n%0.2f - %0.2f = %0.2f\n",num1,num2,(num1-num2));
        break;
        
        case 'c': printf("%0.2f * %0.2f = %0.2f\n",num1,num2,(num1*num2));
        break;
        
        case 'd': if(num2 !=0)
        printf("%0.2f / %0.2f = %0.2f",num1,num2,(num1/num2));
               else
               printf("Number can't be divided by 0\n");
               break;
        
        default: printf ("You entered a wrong choice\n");
        break;
        
        return 0;
       
        
     }
    }