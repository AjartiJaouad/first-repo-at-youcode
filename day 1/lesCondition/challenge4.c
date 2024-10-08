#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Entrez les coefficients de l'équation ax² + bx + c = 0 :");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("L'équation admet deux solutions distinctes :\n");
        printf("x1 = %.2f  x2 =.2f", x1,x2);
        
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("L'équation admet une seule solution");
        printf("x = %.2f", x1);
    } else {
        printf("L'équation n'admet aucune  soulition ");
    }

    return 0;
}