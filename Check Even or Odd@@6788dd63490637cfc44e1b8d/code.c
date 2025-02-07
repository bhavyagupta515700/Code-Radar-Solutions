#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    if(num1%2==0){
        printf(" Even %d",num1);
    }else{
        printf("Odd %d",num1);
    }
    return 0;
}