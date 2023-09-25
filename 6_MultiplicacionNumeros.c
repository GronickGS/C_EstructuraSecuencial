#include <stdio.h>

int main() {
    int num1, num2, resultado;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    resultado = num1 * num2;
    
    printf("El resultado de la multiplicación es: %d\n", resultado);
    
    return 0;
}
