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
    
    float M = C * (1 + i * t);
    printf("total: %f", C, i, t, M);

    return 0;
}
