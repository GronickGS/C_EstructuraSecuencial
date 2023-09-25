#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    
    area = 0.5 * base * altura;
    
    printf("El área del triángulo es: %.2f\n", area);
    
    return 0;
}
