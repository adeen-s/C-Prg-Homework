#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,num,flag=0;
	clrscr();
	printf("\nEnter the upper limit \n");
	scanf("%d",&num);
	for(j=2;j<=num;j++) {
		flag=0;
		for(i=2;i<=j/2;i++) {
			if(j%i==0) {
				flag=1;
			}
		}
		if(!flag)
		printf("\n %d is Prime\n ",j);
	}
	getch();
	return 0;
}
