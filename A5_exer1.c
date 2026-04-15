#include <stdio.h>

int main () {

    float C;
    printf("Digite capital:");
    scanf("%f", &C);

    float i;
    printf("Digite juros:");
    scanf("%f", &i);

    float t;
    printf("Digite tempo:");
    scanf("%f", &t);
    
    float M = C * (1 + i/100 * t);
    printf("total: %f", M);

    return 0;
}