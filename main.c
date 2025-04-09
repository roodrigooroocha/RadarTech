#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(3, 4);
    printf("Resultado: %d\n", resultado);
    return 0;
}
