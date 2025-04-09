#include <stdio.h>
#include <stdlib.h>

#define MAX_OBJETOS 5
#define DISTANCIA_PELIGRO 100


// SPRINT 2
int suma(int a, int b) {
    return a + b;
}

typedef struct {
    int id;
    float distancia; // en metros
} Objeto;

void escanearRadar(Objeto objetos[], int cantidad) {
    printf("Escaneando el área con el radar...\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Objeto ID %d detectado a %.2f metros.\n", objetos[i].id, objetos[i].distancia);
        if (objetos[i].distancia < DISTANCIA_PELIGRO) {
            printf("⚠️  Alerta: Objeto ID %d está dentro del rango de peligro.\n", objetos[i].id);
        }
    }
}

int main() {
    int num_radares;
    int resultado = suma(3, 4);
    printf("Resultado: %d\n", resultado);

    printf("Esta es la descripcion de los cambios propuestos para el sprint1 de SCRUM.");
    Objeto objetosDetectados[MAX_OBJETOS] = {
        {1, 120.5},
        {2, 90.0},
        {3, 300.0},
        {4, 50.0},
        {5, 180.0}
    };

    escanearRadar(objetosDetectados, MAX_OBJETOS);

    printf("Cuantos radares quieres comprar?\n");
    scanf("%d", num_radares);
    return 0;
}

