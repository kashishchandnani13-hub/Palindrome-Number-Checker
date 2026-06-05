#include<stdio.h>
void Palindrome(int num){
    int  n=num , rev=0, rem;
        
        while(num != 0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        if (n == rev){
            printf("%d is a palindrome number\n", n);
        }
        else{
            printf("%d is not a palindrome number\n",n);
        }
}

int main(){
    int num, n;
    printf("Enter a number to check : ");
    scanf("%d" , &num);
    n = num;
    Palindrome(num);
    return 0;
}