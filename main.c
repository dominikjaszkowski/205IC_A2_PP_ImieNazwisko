#include <stdio.h>

int main() {
    int i = 1;
    float f = 1.5;
    double d = 2.5;
    char c = 'c';

    printf("Moje wartości zmiennych: i = %i, f = %.1f, d = %.1lf, c = %c\n",i,f,d,c);

    scanf("%i",&i);
    scanf("%f",&f);
    scanf("%lf",&d);
    scanf(" %c",&c);

    printf("Moje wartości zmiennych po wpisaniu liczb: i = %i, f = %.1f, d = %.1lf, c = %c \n",i,f,d,c);
    return 0;
}
