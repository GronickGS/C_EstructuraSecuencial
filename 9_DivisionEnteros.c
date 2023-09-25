#include <stdio.h>

int main() {
    int dividendo, divisor, cociente, residuo;
    
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);
    
    cociente = dividendo / divisor;
    residuo = dividendo % divisor;
    
    printf("El cociente es: %d\n", cociente);
    printf("El residuo es: %d\n", residuo);
    
    return 0;
}
