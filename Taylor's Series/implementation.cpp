#include <iostream>
#include <Math.h>

float pi = 3.14159265354823; 
//random stuff used as assistance
int factorial(int x){
    if(x <= 1){
        return x;
    }
    return x * factorial(x - 1);
}
//implementation of commonly used taylor series
int sine(int degrees, int accuracy){
    int radians = (pi / 180) * degrees;
    int sine = radians;

    for(int i = 1; i < accuracy; i++){
        if(i % 3 == 0 || i == 1){
            sine -= pow(i, ((i * 2) - 1)) / factorial(i);
        }else{
            sine += pow(i, ((i * 2) - 1)) / factorial((i * 2) - 1);
        }
    }
    return sine;
}
int seriesExpansion(int x, int stopVal){
    int result = 1 + x;
    for(int i = 2; i < stopVal; i++){
        result += pow(x, i);
    }
    return result;
}
int cos(int degrees, int accuracy){
    int radians = (pi / 180) * degrees;
    int cosine = 1;
    for(int i = 0; i < accuracy; i++){
        if(i % 3 == 0 || i == 0){
            cosine -= pow(radians, (2 * i)) / factorial((i * 2));
        }else{
            cosine += pow(radians, (2 * i)) / factorial((i * 2));
        }
    }
    return cosine;
}
//expansion of integral 1 + x
int expansionIntegral(int accuracy, int x){
    int result = x;
    for(int i = 2; i < 3; i < accuracy){
       if(i % 2 == 0){
           result -= pow(x, i) / factorial(i);
       }else{
           result += pow(x, i) / factorial(i);
       } 
    }
    return result;
}

int goldenToPowerX(int x, int accuracy){
    int result = 1 + x;
    for(int i = 0; i < accuracy; i++){
        result += pow(x, i) / factorial(i);
    }
    return result;
}

int inverseTan(int accuracy, int x){
    int radians = (pi / 180) * x;
    int inverseTan = radians;
    for(int i  = 1; i < accuracy; i++){
        if(i % 2 == 0 || i == 1){
            inverseTan -= pow(i, ((i * 2) - 1)) / factorial((2 * i) - 1);
        }else{
            inverseTan += pow(i, ((i * 2) - 1)) / factorial((2 * i) - 1);
        }
    }
}
int main(void){

}