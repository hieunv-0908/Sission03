#include <stdio.h>
int main (){
    float pi = 3.14, r, S, C;
	printf ("nhap vao ban kinh");
	scanf ("%f",&r);
	S = r * r * pi;
	C = 2 * pi * r;
	printf (" dien tich hinh tron la %.2f chu vi hinh tron la %.2f",S,C );
	
	
	return 0;
}
