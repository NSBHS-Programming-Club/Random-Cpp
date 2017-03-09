#include <iostream>

int main(void){
    /** BASIC PROBLEM ========================================================== **/
    int res = 0;
    for(int i = 0; i < 3; i++){
        int inpNum;
        std::cin >> inpNum;
        res += inpNum;
    }
    std::cout << res;
    /** END ==================================================================== **/

    /** EXTENSION ============================================================== **/
    int res[3];
    for(int i = 0; i < 3; i++){
        int inpNum;
        std::cin >> inpNum;
        res[i] = inpNum;
    }
    /** END ==================================================================== **/
    return 0;
}