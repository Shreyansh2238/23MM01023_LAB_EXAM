#include<stdio.h>

int main(){
    float h,r,area,volume,pi=3.14;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Enter height: ");
    scanf("%f",&h);
    area=(2*pi*r*h)+(2*pi*r*r);
    volume=pi*r*r*h;
    printf("Surface area of cylinder=%.2f\n",area);
    printf("Volume of cylinder=%.2f\n",volume);
    return 0;
}