#include <stdio.h>
int main(){
    int num;
    long long fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num<0)
    printf("Error! factorial of a negative number does not exist.");
    else{
        for(int i=1; i<=num; ++i)
        fact *= i;
        printf("Factorial of %d = %llu\n",num,fact);
    }
    
    return 0;
}