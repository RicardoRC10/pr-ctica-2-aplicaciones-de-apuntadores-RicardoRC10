// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    // Implementar la suma aquí
    int c= 0;
    for(int i= 0; i< tamaño; i++){
        c= c + arr[i];
    };
    return c;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamaño= 5;
    // Código para calcular y mostrar la suma
    printf("los numeros son: \n");
    for(int i= 0; i< tamaño; i++){
        printf("%i ", numeros[i]);
    };
    printf("\nel resultado de la suma es %i", sumaArreglo(numeros, tamaño));
    return 0;
}
