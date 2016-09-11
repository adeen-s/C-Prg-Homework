#include <stdio.h>
int main() {
	int i=0,j=1,k,n;
	system("cls || clear");
	printf("Enter the number of terms");
	scanf("%d",&n);
	printf("0  ");
	for(k=0;k<n;k++) {
		printf("%d   ",j=i+j);
		i=i+j;
		j=i-j;
		i=i-j;
	}
	getchar();
	return 0;
}
