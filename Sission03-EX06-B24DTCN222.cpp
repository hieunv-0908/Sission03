#include <stdio.h>
int main (){
    float canhday, chieucao, dientich;
    
	printf ("nhap vao canh day ");
	scanf ("%f",&canhday);
	printf ("nhap vao duong cao ");
	scanf ("%f",&chieucao);
	dientich = 0.5 * chieucao * canhday;
	printf (" dien tich hinh tam giac la %.2f ",dientich);
	
	return 0;
}
