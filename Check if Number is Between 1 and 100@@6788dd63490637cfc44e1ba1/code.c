#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>=1 && number<=100){
        printf("In Range\n",number);
    }
    else(number==0){
        printf("Out of Range\n",number);
    }
    return 0;
}