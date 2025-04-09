#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int num_radares;
    int resultado = suma(3, 4);
    printf("Resultado: %d\n", resultado);
    printf("Cuantos radares quieres comprar?\n");
    scanf("%d", num_radares);
    return 0;
}
