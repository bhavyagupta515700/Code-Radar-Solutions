#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(1<=number<=100){
        printf("In Range\n",number);
    }
    else{
        printf("Out of Range\n",number);
    }
    return 0;
}