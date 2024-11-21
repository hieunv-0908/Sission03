#include <stdio.h>
int main(){
	float diemtoan, diemvan, diemanh, tong, tb;
	
	printf("nhap vao diem van \n");
	scanf("%f",&diemvan);
	getchar();
	printf("nhap vao diem toan \n");
	scanf("%f",&diemtoan);
	getchar();
	printf("nhap vao diem anh \n");
	scanf("%f",&diemanh);
	getchar();
	
	tong = diemvan + diemtoan + diemanh;
	tb = tong / 3;
	
	printf("tong diem cua ban la %.2f \n",tong);
	printf("diem tb cua ban la %.2f \n" ,tb); 
	return 0;
}
