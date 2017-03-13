#include <iostream>

        bool isSorted(int a[], int size){
            for(int i = 1; i < size; i++){
                if(a[i] < a[i-1]){
                    return false;
                }
            }
            return true;
        }

        int* bubble(int a[], int size){
            for(int i = 1; i < size; i++){
                if(a[i] < a[i-1]){
                    //swap
                    int temp = a[i-1];
                    a[i-1] = a[i];
                    a[i] = temp;
                }
            }
            if(isSorted(a, size) == false){
                bubble(a, size);
            }
            return a;
        }
