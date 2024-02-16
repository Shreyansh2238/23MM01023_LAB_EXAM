#include<stdio.h>
#include<math.h>

int main(){
    float r,x,y,x1,y1,dist,distsqr;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("Enter x coordinate of centre: ");
    scanf("%f",&x);
    printf("Enter y coordinate of centre: ");
    scanf("%f",&y);
    printf("Enter an arbitrary x coordinate: ");
    scanf("%f",&x1);
    printf("Enter an arbitrary y coordinate ");
    scanf("%f",&y1);
    distsqr=((x-x1)*(x-x1)) + ((y-y1)*(y-y1));
    dist=pow(distsqr,0.5);
    if(dist==r)
    {
        printf("The point lies on the circle.\n");
    }
    else if(dist>r)
    {
        printf("The point lies outside the circle.\n");
    }
    else{
        printf("The point lies inside the circle.\n");
    }
    return 0;
}