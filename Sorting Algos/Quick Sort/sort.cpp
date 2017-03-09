/** ==================================================================

    DOES NOT WORK! I WILL FIX THIS LATER.

=====================================================================**/
#include "../../libraries/helpers.cpp"

int* quickSort(int a[], int left, int right){
    int i = left;
    int j = right;
    int pivot = (i + j) / 2;

    while(i <= j){
        if(a[i] < pivot){
            i++;
        }if(a[j] > pivot){
            j--;
        }
        if(i <= j){
            int tmp = a[j];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    };
    if(left < j){
        quickSort(a, left, j);
    }else if(i < right){
        quickSort(a, i, right);
    }
    return a;
}

int main(void){
    int testArr[9] = {4, 1, 0, 0, 2 ,1, 5, 2, 3};
    quickSort(testArr, 0, 9);
    for(int i = 0; i < 9; i++){
        std::cout << "[" << testArr[i] << "]";
    }
}