#include <stdio.h>

int main(){
    
int age;
printf("\n Enter the your Age :");
scanf("%d",&age);

if (age >60 )
{
    printf("\n you can Drive and Senior Citizen ");

}
else if(age > 40 )
{
    printf("\n Your can Drive and you are elder ");

}
else if(age > 18 )
{
    printf("\n you can drive ");
}

    return 0;
}