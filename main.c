#include <stdio.h>

int main() {
    int casa;
    float num;
    printf("Introduz um numero real positivo: ");
    scanf("%f", &num);
    printf("Introduz o numero de casas para arredondar (0 a 7): ");
    scanf("%d", &casa);

    if(casa > 7 || casa <0 || num < 0){
        printf("O usuario introduziu informacao invalida!");
        return 0;
    }

    switch(casa){
        case 0:
            printf(" %.0f",num);
            break;
        case 1:
            printf(" %.1f",num);
            break;
        case 2:
            printf(" %.2f",num);
            break;
        case 3:
            printf(" %.3f",num);
            break;
        case 4:
            printf(" %.4f",num);
            break;
        case 5:
            printf(" %.5f",num);
            break;
        case 6:
            printf(" %.6f",num);
            break;
        case 7:
            printf(" %.7f",num);
            break;

    }
    return 0;
}
