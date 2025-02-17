#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3){
        printf("%d\n");
    }
    else if(num2>=num1 && num2>=num3){
        printf("%d\n");
    }
    else if(num3>=num1 && num3>=num2){
        printf("%d\n");
    }
    else{
        printf("%d\n");
    }
    return 0;
}