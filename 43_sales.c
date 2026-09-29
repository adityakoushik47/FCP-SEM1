#include<stdio.h>
int main(){
    int commission, sales;
    printf("Enter the sales amount: ");
    scanf("%d",&sales);
    if(sales<500){
        commission = sales * 0.05;
    }
    else if(sales>=500 && sales<2000){
        commission = 35+sales * 0.10;
    }
    else if(sales>=2000 && sales<5000){
        commission = 185+sales * 0.12;
    }
    else{
        commission = sales * 0.125;
    }
    printf("The commission is: %d\n",commission);
    return 0;
}
    