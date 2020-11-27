#include <stdio.h>

int main() {
    int i = 1;
    float f = 1.5;
    double d = 2.5;
    char c = 'c';

    printf("Moje wartości zmiennych: i = %i, f = %f, d = %d, c = %c \n",i,f,d,c);

    scanf("%i",&i);
    scanf("%f",&f);
    scanf("%f",&d);
    scanf(" %c",&c);

    printf("Wynik: i = %i, f = %.1f, d = %.1f, c = %c \n",i,f,d,c);
    return 0;
}
