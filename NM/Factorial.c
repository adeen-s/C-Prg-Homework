#include<stdio.h>
int main() {
	int i,num;
	unsigned long long fact=1;
	system("cls || clear");
	printf("\n Enter a number \n");
	scanf("%d",&num);
	if(num<0) {
		printf("\n Negative values not allowed \n ------ABORTING------ \n");
		return 0;
	}
	for(i=num;i>=1;i--)
		fact=fact*i;
	printf("\n Factorial of %d is %llu \n",num,fact);
	getchar();
	return 0;
}	
