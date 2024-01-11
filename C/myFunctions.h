// MODULES
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>



/* FUNCTIONS DECLARATIONS AND HEADER SUMMARY */

// ALGORITHMS
void bubbleSort(int arr[], int arr_size);
void insertionSort(int arr[], int arr_size);

// CODE
void drawCMD(int pos_x, int pos_y, char charUsed);
void printArr(int arr[], int arr_size);
int randomNumber(int range);




/* FUNCTIONS DEFINITIONS */

void bubbleSort(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        for (int j = i + 1; j < arr_size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int arr_size) {
    for (int i = 1; i < arr_size; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        printf(" %d ", arr[i]);
    }
}

int randomNumber(int range) {
    srand(time(NULL));
    int number = rand() % range;
    return number;
}

void drawCMD(int pos_x, int pos_y, char charUsed) {
    for (int y = 0; y < pos_y; y++) {
        for (int x = 0; x < pos_x; x++) {
            if (y == 0 || y == pos_y - 1 || x == 0 || x == pos_x -1) {
                printf("%c", charUsed);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}