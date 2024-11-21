#include <stdio.h>;
int main(){
	int originerNumber, digit1, digit2, digit3, digit4;
	printf("nhap vao so co bon chu so");
	scanf("%d",&originerNumber);
	if (originerNumber < 1000 || originerNumber > 9999 ) {
		printf ("so nhap vao khong hop yeu cau");
		return 1;
	}
	digit1 = originerNumber / 1000;
	digit2 = (originerNumber / 100) % 10;
	digit3 = (originerNumber / 10) % 10;
	digit4 = originerNumber % 10;
	printf("so nghich dao la: %d%d%d%d",digit4,digit3,digit2,digit1);
	return 0;
}
