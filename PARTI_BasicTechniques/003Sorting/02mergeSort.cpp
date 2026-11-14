#include <iostream>

// Función auxiliar para fusionar dos subarreglos ordenados
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Arreglos temporales dinámicos (evita usar <vector>)
    int* L = new int[n1];
    int* R = new int[n2];

    // Copiar datos a los arreglos temporales L[] y R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0; // Índice inicial del primer subarreglo
    int j = 0; // Índice inicial del segundo subarreglo
    int k = left; // Índice inicial del subarreglo fusionado

    // Fusionar los arreglos temporales de vuelta en arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si los hay
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si los hay
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Liberar la memoria dinámica auxiliar
    delete[] L;
    delete[] R;
}

// Función principal de Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return; // Caso base: 1 o 0 elementos
    }

    int mid = left + (right - left) / 2;

    // Ordenar primera y segunda mitad
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Unir las mitades ordenadas
    merge(arr, left, mid, right);
}

// Función para imprimir el arreglo
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arreglo desordenado:\n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    std::cout << "Arreglo ordenado:\n";
    printArray(arr, arr_size);

    return 0;
}