#include <stdio.h>

int main () {
    float capital;
    printf("Digite capital: ");
    scanf("%f", &capital);
    
    float juros;
    printf("Digite juros: ");
    scanf("%f", &juros);
    
    float rendimento;
    int mes;
    
    for (mes = 1; mes <= 12; mes++) {
        rendimento = capital + (capital *(juros/100)) * mes;
        printf("Mes %d: %.2f\n", mes, rendimento);
    }
    
    return 0;
}