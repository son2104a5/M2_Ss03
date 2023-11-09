#include<stdio.h>
int main(){
	printf("nhap so co 4 chu so: ");
	char a=getchar();
	char b=getchar();
	char c=getchar();
	char d=getchar();
	int sum=a+b+c+d-192;
	printf("sum=%d\n",sum);
	printf("so nghich dao: ");
	putchar(d);
	putchar(c);
	putchar(b);
	putchar(a);
}
	
