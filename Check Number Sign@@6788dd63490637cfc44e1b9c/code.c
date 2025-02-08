#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>0){
        printf("Positive\n",number);
    }
    else if(number<0){
        printf("Negative\n",number);
    }
    else{
        printf("Zero\n",number)
    }
    return 0;
}