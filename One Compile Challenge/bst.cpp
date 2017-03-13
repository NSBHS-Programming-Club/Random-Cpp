#include "bubble.cpp"

int bst(int arr[], int size, int target){
    int centre;
    int start = 0;
    int end = size - 1;
    bool notFound = true;
    while(notFound){
        centre = (end - start) / 2;
        if(arr[centre] < target){
            //cut bottom
            start = centre;
            end = size - 1;
        }else  if(arr[centre] == target){
            notFound = false;
        }else if(arr[centre] > target){
            //cut top half
            end = centre;
            start = 0;
        }
    }
    return centre;
}

int main(void){
    int arr[7] = {4 ,11 ,2 ,5 ,10, 9, 3};
    bubble(arr ,7);
    for(int i = 0; i < 7; i++){
        std::cout << "[" << arr[i] << "]";
    }
    std::cout << " \nNumber Found At Index: " << bst(arr, 7, 5) << std::endl;
    return 0;
}