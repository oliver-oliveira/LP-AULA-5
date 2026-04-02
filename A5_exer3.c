#include <stdio.h>
#include <math.h>

int main () {
  float numero, raiz;
  
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    raiz = sqrt(numero);
    printf("Raiz quadrada de %.2f = %.2f", numero, raiz);

    return 0;
}