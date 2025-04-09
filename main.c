#include <stdio.h>
#include <stdlib.h>

#define MAX_OBJETOS 5
#define DISTANCIA_PELIGRO 100


int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(3, 4);
    printf("Resultado: %d\n", resultado);
    return 0;
}
