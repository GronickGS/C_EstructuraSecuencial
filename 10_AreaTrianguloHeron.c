#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3, s, area;
    
    printf("Ingrese la longitud del primer lado: ");
    scanf("%f", &lado1);
    
    printf("Ingrese la longitud del segundo lado: ");
    scanf("%f", &lado2);
    
    printf("Ingrese la longitud del tercer lado: ");
    scanf("%f", &lado3);
    
    s = (lado1 + lado2 + lado3) / 2;
    area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    
    printf("El área del triángulo es: %.2f\n", area);
    
    return 0;
}
