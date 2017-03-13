#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

bool isSorted(int a[], int size){
    for(int i = 1; i < size; i++){
        if(a[i] < a[i-1]){
            return false;
        }
    }
    return true;
}

int* bubbleSort(int a[], int size){
    for(int i = 1; i < size; i++){
        if(a[i] < a[i-1]){
            int temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
    }
    if(isSorted(a, size) == false){
        bubbleSort(a, size);
    }
    return a;
} 


int main(void){
    int testArr[5] = {1, 0, 9, 2, 7};
    bubbleSort(testArr, 5);

    for(int i = 0; i < 5; i++){
        printf("[%d]",testArr[i]);
    }

    return 0;
}