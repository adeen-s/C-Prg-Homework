#include <stdio.h>
int main() {
	int i,j;
	system ("cls || clear");
	for(i=1;i<=10;i++) {
		for(j=1;j<=4;j++)
			printf("%d ",(j*i));
		printf("\n");
	}
	getchar();
	return 0;
}
