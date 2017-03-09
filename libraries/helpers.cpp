#include <iostream>
#include <string>

class helpers{
    public:
        bool isSorted(int a[], int size){
                for(int i = 0; i < size - 1; i++){
                    if(a[i+1] < a[i]){
                    return false;      
                }
            }
            return true;
        }
        int* shift(int a[], int indexVal, int size){
            int temp = a[indexVal];
            for(int i = indexVal; i < size-1; i++){
                std::cout << a[i] << "\n";
                if(i == size-1){
                    a[i] = temp;        
                }else{
                    a[i] = a[i+1];
                }
            }
            a[size-1] = temp;
        }

        void swap(int i ,int j, int *a){
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
};