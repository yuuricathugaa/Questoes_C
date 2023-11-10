// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o valor de N : ");
    scanf("%i", &n);
    
    int valor = 0;
    while(valor <= n){
        if( valor % 2 == 0){
            printf(" %i ", valor);
        }
        valor +=1;
    }

    return 0;
}
