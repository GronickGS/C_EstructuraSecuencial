#include <stdio.h>

int main() {
    float num1, num2, num3, promedio;
    
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    printf("Ingrese el tercer número: ");
    scanf("%f", &num3);
    
    promedio = (num1 + num2 + num3) / 3;
    
    printf("El promedio es: %.2f\n", promedio);
    
    return 0;
}
