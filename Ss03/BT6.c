#include<stdio.h>
#include<math.h>
int main(){
	int a, year=2023;
	printf("Nhap nam sinh cua ban:\n");
	scanf("%d", &a);
	int b= year - a;
	printf("Nam nay ban %d tuoi.\n", b);
	if(b%2==0) printf("Tuoi cua ban la tuoi chan.");
	else printf("Tuoi cua ban la tuoi le.");
	return 0;
}
