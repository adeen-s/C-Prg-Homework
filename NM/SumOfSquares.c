#include<stdio.h>
int main() {
	int n;
	unsigned long long sum;
	system("cls || clear");
	printf("\n Enter the number till which the sum of squares are to be calculated \n");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf(" \n The sum is %llu \n",sum);
	getchar();
	return 0;
}
