#include<stdio.h>

int main(){
    int fact = 1;
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    for(int i = 1; i <= number; i++){
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}