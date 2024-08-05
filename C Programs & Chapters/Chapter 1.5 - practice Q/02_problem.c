/*Formula : Area of circle = π r*r
                       π=3.14 */

#include<stdio.h>
int main()
{

float radius,area;

printf("Enter the Radius of circle :");
scanf("%f",&radius);

area = 3.14 * radius * radius ;

printf("Area of circle is :%f",area);

return 0;

}