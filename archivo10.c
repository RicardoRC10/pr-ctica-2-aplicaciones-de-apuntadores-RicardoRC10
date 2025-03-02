// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    int t= tamaño;
    for(int i= 0; i<t; i++){
        for(int j= 0; j<t; j++){
            int mayor= arr[j];
            if(arr[j]>arr[j+ 1]){
                arr[j]=arr[j + 1];
                arr[j + 1]=mayor;
            }
            
        }
        
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamaño= 5;
    // Código para ordenar y mostrar el arreglo
    printf("El orden antes del acomodo es:\n");
    for(int j= 0; j<tamaño; j++){
        printf("%i \n", arr[j]);
        }
    ordenarBurbuja(arr, tamaño);
    printf("El orden despues del acomodo es:\n");
    for(int j= 0; j<tamaño; j++){
        printf("%i \n", arr[j]);
        
        }
    return 0;
}
