#include <stdio.h>

int main(void){
    /** BASIC SOLUTION =====================================================================**/
    int sum;
    int temp;
    for(int i = 0; i < 3; i++){
        printf("What is you number %d : ", i+1);
        scanf("%d", &temp);
        sum += temp;
    }
    printf("The sum is: %d ", sum);
    /** EXTENSION ===========================================================================**/
    int arr[3];
    for(int i = 0 ;i < 3; i++){
        printf("What is your number: %d ", i+1);
        scanf("%d", &temp);
        sum += temp;
        arr[i] = temp;
    }
    return 0;

}