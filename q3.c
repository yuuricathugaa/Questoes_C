#include "stdio.h"

int main(void)
{
  char tecla;

  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  getchar();

  while(tecla != 'x')
    {
      printf("\nDigite uma tecla: ");
      scanf("%c", &tecla);
      getchar();

      printf("%c", tecla);

      printf("\n");
    }

  printf("\nencerrou");
 
  return 0;
}
