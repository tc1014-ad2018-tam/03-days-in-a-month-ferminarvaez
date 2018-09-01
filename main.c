#include <stdio.h>

int main() {
    unsigned short month; // Unsigned porque no quiero que haya negativos. Y short porque no hay valor que vaya a pasar de 12
    int year; // No short porque solo acepta de 0 a 255, y el año será hasta 2000
    char term; //
    
    printf("Give me the month number: ");
    scanf("%i", &month);
    printf("Give me the year: ");
    scanf("%i", &year);
    
    switch(month){ // para no poner tantos ifs
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The month has 31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The month has 30 days\n");
            break;
        case 2:
            if ((year % 4) == 0) { // el porcentaje es para checar el residuo. Si año divisible entre 100 y porcentaje 0, pasa lo de abajto
                if ((year % 100) == 0) {
                    if ((year % 400) == 0) {
                        printf("The month has 29 days\n");
                    } else {
                        printf("The month has 28 days\n");
                    }
                } else {
                        printf("The month has 29 days\n");
                }
            } else {
                printf("The month has 28 days\n");
                }
                break;
            default: 
                printf("The month you entered is not valid!\n");
            }
    return 0;
}
