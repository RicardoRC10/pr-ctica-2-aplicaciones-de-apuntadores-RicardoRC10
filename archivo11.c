// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    int *direc;
    for(int j= 0; j<tamaño; j++){
            if(arr[j]==valor){
                direc= &arr[j];
            }
        }
    printf("la posición es: %p", direc);
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamaño= 5, valor= 30;
    // Código para buscar un número y mostrar su dirección
    *buscarElemento(arr, tamaño, valor);
    return 0;
}

