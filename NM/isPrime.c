#include<stdio.h>
int main() {
	int i,num,flag=0;
	system("cls || clear");
	printf("\nEnter a number\n");
	scanf("%d",&num);
	if(num==1) {
		printf("\n 1 is neither prime nor composite \n");
		return 0;
	}
	for(i=2;i<=num/2;i++) {
		if(num%i==0) {
			printf("\n %d is not prime \n",num);
			flag=1;
			break;
		}
	}
	if(!flag)
	printf("\n %d is Prime\n ",num);
	getchar();
	return 0;
}	
