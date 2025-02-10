#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='R'){
        printf("Stop\n",a);
    }
    else if(a=='G'){
        printf("Go\n",a);
    }
    else if(a=='Y'){
        printf("Slow Down\n",a);
    }
    else{
        printf("Invalid input\n",a);
    }
    return 0;
}