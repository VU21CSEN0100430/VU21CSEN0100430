#include <stdio.h>

int main()
{
   int a,b,c,d,e,f,g,ch;
   printf("enter the value of two variables a ,b,c here");
   scanf("%d%d%d",&a,&b,&c);
   printf("enter the operations\n 1.addition 2.subraction 3.multiplication 4.division ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:  
       g=a+b+c;
       printf("%d",g);
       break;
    case 2:
       d=a+c-b;
       printf("%d",d);
       break;
    case 3:
       e=a*b*c;
       printf("%d",e);
       break;
    case 4:
       f=(a+c)/b;
       printf("%d",f);
       break;
   }

