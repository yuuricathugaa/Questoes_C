#include <stdio.h>

int main() {
   int a, b, divisao;
   
   printf("Digite o valor de A : ");
   scanf("%i", &a);
   
   printf("Digite o valor de B : ");
   scanf("%i", &b);
   
   if(b != 0){
       divisao = a/b;
       printf("A/B = %i", divisao);
   }
   else{
       printf("B é igual a zero, escolha outro número !!");
   }

    return 0;
}
