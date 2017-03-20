#include "../../libraries/helpers.cpp"

//check if array is sorted
bool isSorted(int a[], int size){
    for(int i = 0; i < size - 1; i++){
        if(a[i+1] < a[i]){
            return false;      
        }
    }
    return true;
}
int* bubbleSort(int a[], int size){
    for(int i = 1; i < size; i++){
        if(a[i] < a[i-1]){
            int temp = a[i-1];
            a[i-1] = a[i];
            a[i] = temp;
        }
    }
    if(isSorted(a, size) == false){
        bubbleSort(a, size);
    }
    return a;
}

int main(void){
    int arrToSort[5] = {1, 2, 3, 4, 0};
    bubbleSort(arrToSort, 5);
    for(int i = 0; i < 5; i++){
        std::cout << "[" << arrToSort[i] << "]";
    }
}
