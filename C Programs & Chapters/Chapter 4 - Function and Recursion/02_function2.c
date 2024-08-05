#include <stdio.h>


void good_morning();
void good_afternoon();
void good_evening();

void good_morning()
{
    printf("\n Good morning ");
}

void good_afternoon()
{
  printf("\n Good Afternoon ");
}

void good_evening()
{
    printf("\n Good Evening  ");

}
int main(){
    
    good_morning();
    good_afternoon();
    good_evening();

    return 0;
}