#include <stdio.h>

int main()
{  
    int i;
    printf("enter the input");
    scanf("%i",&i);
    switch(i)
    {
    case 1:{
    int hr,min,sec;
    printf("\nenter the value of hr");
    scanf("%d",&hr);
    min=hr*60;
    printf("\n%d",min);
    sec=min*60;
    printf("\n%d",sec);
    break;
    }
    case 2:{
    float km,meters;
    printf("enter the value of km");
    scanf("%f",&km);
    meters=km*1000;
    printf("\n%f",meters);
    break;
    }
    case 3:{
    float cel,far;
    int ch;
    printf("enter the ch :");
    scanf("%d",&ch);
    
    switch(ch)
    {
    case 1:{
    printf("enter the value of cel");
    scanf("%f",&cel);
    far=(1.8*cel)+32;
    printf("%f",far);
    break;
    }
    case 2:
    {
    float cel,kel;
    printf("enter the value of cel");
    scanf("%f",&cel);
    kel=cel+273;
    printf("%f",kel);
    break;
    }
    }
    break;
    }
    case 4:{
    float area_of_sqare,l;
    printf("enter the value of l");
    scanf("%f",&l);
    area_of_sqare=l*l*l;
    printf("%f",area_of_sqare);
    break;
    }
    case 5:
    {
    float volume_of_cuboid,l,b,h;
    printf("enter the values of l,b,h");
    scanf("%f%f%f",&l,&b,&h);
    volume_of_cuboid=l*b*h;
    printf("%f",volume_of_cuboid);
    break;
}
    defalt:
      printf("\nwrong choice....!");
    }
    return 0;
}


