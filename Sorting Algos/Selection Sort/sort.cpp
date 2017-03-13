#include "../../libraries/helpers.cpp"

helpers helper;

int* selectionSort(int a[], int size){
    int currPointer = 0;
    while(helper.isSorted(a ,size) == false){
        int smallestVal = 0;
        for(int i = currPointer; i < size-1; i++){
            if(a[i] < a[smallestVal]){
                smallestVal = i;
            }
        }
        int temp = a[smallestVal];
        a[smallestVal] = a[currPointer];
        a[currPointer] = temp;
        currPointer++;
    }
}

int main(void){
    int testArr[5] = {5, 1, 4, 3, 2};

    selectionSort(testArr, 5);
    for(int i =0 ;i < 5; i++){
        std::cout << "[" << testArr[i] << "]";
    }

    return 0;
}