// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
  char continuar = 's';
  
   while(continuar == 's')
   {
       
       int a, b, opcao, soma, divisao, subtracao, multiplicacao;
       printf("Digite o valor de A :" );
       scanf("%i", &a);
       getchar();
       printf("\nDigite o valor de B :" );
       scanf("%i", &b);
       getchar();
       
       printf("\nMenu :");
       printf("\n1) Soma;");
       printf("\n2) Subtração;");
       printf("\n3) Multiplicação;");
       printf("\n4) Divisão.");
      
       printf("\nEscolha a operação : ");
       scanf("%i", &opcao);
       getchar();
       
       soma = a + b;
       subtracao = a - b;
       multiplicacao = a*b;
       divisao = a/b;
       
       switch(opcao){
           case 1:
           printf("A + B = %i", soma);
           break;
           
           case 2:
           printf("A - B = %i", subtracao);
           break;
           
           case 3:
           printf("A x B = %i", multiplicacao);
           break;
           
           case 4:
           printf("A / B = %i", divisao);
           break;
           
           default:
           printf("Opção Inválida!!");
           break;
       }
       
       printf("\nDeseja continuar? (s/n) :");
       scanf("%c", &continuar);
       getchar();
       
       if(continuar == 'n'){
           printf("Encerrou!!");
       }
       
   }

    return 0;
}
