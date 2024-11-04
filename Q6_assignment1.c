//WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies. 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the the x coordinate\n");
    scanf("%d",&a);
    printf("Enter the the y coordinate\n");
    scanf("%d",&b);
    if(a>0&&b>0)
    {
        printf("The points (%d,%d) lies in the First quadrant\n",a,b);
    }
     else if(a<0&&b>0)
    {
        printf("The points (%d,%d) lies in the Second quadrant\n",a,b);
    }
    else if(a<0&&b<0)
    {
        printf("The points (%d,%d) lies in the Third quadrant\n",a,b);
    }
    else if(a>0&&b<0)
    {
        printf("The points (%d,%d) lies in the Fourth quadrant\n",a,b);
    }
    else
    {   
        if(a==0&&b!=0)
        printf("The point lies on y axis");
        else if(a==0&&b==0)
        printf("The point lies on origin");
        if(a!=0&&b==0)
        printf("The point lies on x axis");
    }
    return 0;
}