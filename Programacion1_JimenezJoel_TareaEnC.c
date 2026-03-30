#include <stdio.h>

int main() {
    int inicio, fin, incremento;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin);

    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);

    printf("\n--- Secuencia de numeros ---\n");
    
    for (int i = inicio; i <= fin; i = i + incremento) {
        printf("%d\n", i);
    }

    return 0;
}