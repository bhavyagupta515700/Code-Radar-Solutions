#include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    if(day==1){
        printf("Monday\n",day);
    }
    else if(day==2){
        printf("Tuesday\n",day);
    }
    else if(day==3){
        printf("Wednesday\n",day);
    }
    else if(day==4){
        printf("Thursday\n",day);
    }
    else if(day==5){
        printf("Friday\n",day);
    }
    else if(day==6){
        printf("Saturday\n",day);
    }
    else{
        printf("Sunday\n",day);
    }
    return 0;
}