#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>=1 && number<=100){
        printf("In Range\n",number);
    }
    else if (number==0 ){
        printf("Out of Range\n",number);
    }
    else{
        printf("out of Range",number);
    }
    return 0;
}