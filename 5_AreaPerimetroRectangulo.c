#include <stdio.h>

int main() {
    float largo, ancho, area, perimetro;
    
    printf("Ingrese el largo del rectángulo: ");
    scanf("%f", &largo);
    
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &ancho);
    
    area = largo * ancho;
    perimetro = 2 * (largo + ancho);
    
    printf("El área del rectángulo es: %.2f\n", area);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    
    return 0;
}
