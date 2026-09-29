#include<stdio.h>
int main(){
    int units,charges;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    if(units<=200){
        charges = units * 0.50;
    }
    else if(units>200 && units<=400){
        charges = 100 + (units-200) * 0.65;
    }
    else if(units>400 && units<=600){
        charges = 230 + (units-400) * 0.80;
    }
    else{
        charges = 425 + (units-600) * 1.25;
    }
    printf("The charges are: %d\n",charges);
    return 0;
}