#include<stdio.h>
int main(){
	int mang[]={7,6,5,4,3,2,1};
	int kichThuoc = sizeof(mang) / sizeof(mang[0]);
	
	printf("cac phan tu cua mang tu cuoi ve dau la : \n");
	
	for (int i = 0; i < kichThuoc; i++){
		printf("%d",mang[kichThuoc-1-i]); 
	} 
	return 0; 
} 
