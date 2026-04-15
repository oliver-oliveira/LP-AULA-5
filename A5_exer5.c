#include <stdio.h>

int main () {
    char modo = 'i';
    
    for(; modo != 'F';) {
        printf("Digite o modo (L - lavar,  F - fim, S- secar, E - enxaguar):");
        scanf("%c", &modo);
        
        switch(modo) {
            case 'L':;
            printf("Lavando\n");
            break;
            
            case 'F':;
            printf("Fim\n");
            break;
            
            case 'S':;
            printf("Secando\n");
            break;
            
            case 'E':;
            printf("Enxaguando\n");
            break;
        } 
    printf("Finalizado\n");
    }
    return 0;
}