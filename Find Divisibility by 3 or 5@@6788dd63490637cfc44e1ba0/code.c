#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number%3==0 && number%5==0){
        printf("Divisible by Both\n",number);
    }
    else if (number%3==0){
        printf("Divisible by 3\n",number);
    }
    else if(number%5==0){
        printf("Divisible by 5\n",number);
    }
    else{
        printf("Not Divisible\n",number);
    }
    return 0;
}