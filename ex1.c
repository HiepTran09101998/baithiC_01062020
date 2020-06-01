#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, t, sum = 0, phandu;
	printf("nhap n \n");
	scanf("%d",&n);
	t=n;
	
	while(n)
	{
		phandu = n%10;
		sum = sum + phandu;
		n /= 10;
	}
	
	printf("tong so %d", sum);
	return 0;
}
