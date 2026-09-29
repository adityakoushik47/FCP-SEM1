#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("%d is not a prime number.\n",num);
            break;
        }
    }
    if(i==num){
        printf("%d is a prime number.\n",num);
    }
    return 0;
}