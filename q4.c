#include <stdio.h>

int main() {
    int valor, opcao;
    
    printf("Quanto de dinheiro você tem ? ");
    scanf("%i", &valor);
    
if(valor < 300){
    printf("Você não possui dinheiro suficiente para comprar um tênis !!");
}

else if(valor >= 300 && valor < 500){
    printf("Você possui dinheiro para comprar o tênis comum !");
}

else if(valor >= 500 && valor < 800){
    printf("Escolha entre as opções : ");
    printf("\n1) Comprar o tênis comum;");
    printf("\n2) comprar o modelo de corrida;");
    printf("\nVou escolher a opção :");
    scanf("%i", &opcao);
    
    if(opcao == 1){
        printf("Você comprou o comum!");
    }
    if(opcao == 2){
        printf("Você comprou o de corrida!");
    }
}
    return 0;
}
