#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[50];
	printf("nhap chuoi ki tu in hoa:");
	gets(string);
	
	strlwr(string);
	printf("chuoi ki tu in thuong: %s", string);
	return 0;
}
