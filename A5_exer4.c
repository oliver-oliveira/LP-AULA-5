#include <stdio.h>
#include <math.h>
int main () {
    float C, i;
    int t;
    
    printf("Capital: ");
    scanf("%f", &C);
    
    printf("Taxa de juros(%): ");
    scanf("%f", &i);
    
    printf("Tempo(meses): ");
    scanf("%d", &t);
    
    i = i/100;
    
    for(int mes = 1; mes <= t; mes++) {
        float total = C * pow(1 + i, mes);
        printf("Mes %d - Total: %.6f\n", mes, total);
    }
    return 0;
}