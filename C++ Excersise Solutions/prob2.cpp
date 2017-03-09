#include <algorithm>
#include "../libraries/helpers.cpp"

helpers helper;

int main(void){
    /** BASIC PROBLEM ========================================================== **/
    int arr[20];
    for(int i = 0; i < 20; i++){
        int temp;
        std::cin >> temp;
        arr[i] = temp;
    }
    /** END ==================================================================== **/
    /** ADVANCED PROBLEM ========================================================== **/
    helper.bubbleSort(arr, 20);
    std::cout << arr[19] << " is the highest number \n";
    std::cout << arr[0] << " is the lowest number \n";
    std::cout << arr[19] - arr[0] << " is the range \n";
    float median = (arr[10] + arr[9]) / 2;
    std::cout << median << " is the median \n";        
    /** END ==================================================================== **/
    return 0;
}