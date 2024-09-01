#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double side1, side2, side3;
    printf("enter side 1:\n");

    scanf("%lf", &side1);

    printf("\n you entered %.2lf \n", side1);
    
    printf("enter side 2:\n");

    scanf("%lf", &side2);

    printf("\n you entered %.2lf \n", side2);

    printf("enter side 3:\n");

    scanf("%lf", &side3);

    printf("\n you entered %.2lf \n", side3);

    //compare the three sides to see which one is bigger and then compare to see if you can make a triangle
    if(side1 >=side2 && side1>=side3)
    {
        if(side1 >side2+side3){
            printf("Impossible\n");
            return 0;
            }

    }
    else if(side2 >=side1 && side2>=side3)
    {
        if(side2 >side1+side3){
            printf("Impossible\n");
            return 0;
        ;}
    }
    else if(side3 >=side2 && side3>=side1)
    {
        if(side3 >side2+side1){
            printf("Impossible\n");
            return 0;
            ;}
    }

    double total = side1+side2+side3;

    double s = total/2;

    double s1=s-side1;
    double s2=s-side2;
    double s3=s-side3;

    double area = sqrt(s*s1*s2*s3);

    printf("area is %.2lf", area);

    if (side1==side2&&side2==side3){
        printf("equilateral");
    }
    if (side1==side2 & side2!=side3){
        printf("isosceles");
    }


    return 0;
}