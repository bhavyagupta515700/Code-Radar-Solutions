#include<stdio.h>
int main()
{
    float side1,side2,side3;
    scanf("%f",&side1);
    scanf("%f",&side2);
    scanf("%f",&side3);
    if(side1==side2 && side2==side3){
        printf("Equilateral %f");
    }
    else if (side 1==side2 || side 2==side3 ){
        printf("Isosceles %f");
    }
    else{
        printf("Scalene %f");
    }
    return 0;
}