#include <stdio.h>

int main(){
    int user_num;
    printf("Enter a number to check if it's even: ");
    scanf("%d", &user_num);
    if(user_num % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}