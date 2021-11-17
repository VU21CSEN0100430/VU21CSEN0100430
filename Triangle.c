#include <stdio.h>

int main()
{
    float a,b,c;
    printf("enter the value of a");
    scanf("%f",&a);
    if (a<0||a>179){
      printf("enter the correct angle");  
    }
    else
    {
        printf("enter the second angle");
        scanf("%f",&b);
    if (b<0||b>179){
        printf("enter the correct angle");
    }
    else
    c=180-(a+b);
    printf("%f",c);
    }
    return 0;   
}
