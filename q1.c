#include <stdio.h>

int main() {
srand (time(NULL));
int a = 50+ rand() %151;

if(2 == 0){
    printf("%i é par", a);
}
else{
    printf("%i é ímpar", a);
}

    return 0;
}
