#include<stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int number = 5;
    printf("Factorial is %d", factorial(number));
    return 0;
}