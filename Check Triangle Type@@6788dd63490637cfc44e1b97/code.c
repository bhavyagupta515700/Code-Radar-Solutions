#include<stdio.h>
int main()
{
    int side1,side2,side3;
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if(side1==side2 && side2==side3){
        printf("Equilateral %d");
    }
    else if (side 1==side2 || side 2==side3 ){
        printf("Isosceles %d");
    }
    else{
        printf("Scalene %d");
    }
    return 0;
}