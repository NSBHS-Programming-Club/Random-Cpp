# Taylor's Series

## What is it?
 Taylor's Series is an infinite sum giving the value of a function f(z)

## Example
A typical Taylor Series for sine looks like


![alt tag](http://tutorial.math.lamar.edu/Classes/DE/TaylorSeries_files/eq0015P.gif)

## How to use the functions
To use the sine function you do this
```c++
#include "implementation.cpp"

int main(void){
    int accuracy = 7; // We can't use the traditional infinite sum so we set a limit
    int angle = 45;
    // You don't have to add iostream as it has been included in the file already
    std::cout << sine(45, 7);

    return 0;
}
```