#include <stdio.h>
#include <ncurses.h>
void main()
{
system("clear");
int a,b,z;
printf("Enter values of a and b\n");
scanf("%d\n%d",&a,&b);
z=a*a+b*b+2*a*b;
printf("The result is %d\n",z);
getchar();
}
