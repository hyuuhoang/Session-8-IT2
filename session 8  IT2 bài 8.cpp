#include <stdio.h>
int main(){
	int arr[5]={2,9,8,6,7};
	int n,i;
	printf("Moi ban nhap vao 1 phan tu: ");
	scanf("%d",&n);
	for( i=0;i<5;i++){
		if(n==arr[i]){
			printf("Phan tu trong mang la: arr[%d] ",i);	
			break;
		}
		
	}
	if(n!=arr[0] && n!=arr[1] && n!=arr[2] && n!=arr[3] && n!=arr[4]){
		printf("Phan tu %d khong ton tai trong mang ", n);	
	}
	
	
	return 0;
}
