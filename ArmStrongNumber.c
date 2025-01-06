#include<stdio.h>

int main(){
    int num, sum = 0, r, count = 0;
    printf("Enter the number");
    scanf("%d", &n);
    num = count;
    while(n > 0){
        r = n % 10;
        sum = sum + r * r * r;
        num = num / 10;
    }
    if(count == sum)
    printf("Armstrong number");
    else
    printf("Not armstrong number");
    return 0;
}