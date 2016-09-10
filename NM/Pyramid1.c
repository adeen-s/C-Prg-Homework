#include <stdio.h>
int main() {
	int i,j,k,l=1;
	system ("cls || clear");
	for(i=1;i<=4;i++) {
		for(j=1;j<=4-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("%d",l++);
		printf("\n");
	}
	getchar();
	return 0;
}
