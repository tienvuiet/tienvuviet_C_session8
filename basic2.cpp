#include<stdio.h>
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int n;
	int tontai=0; 
	printf("nhap vao phan tu muon tim: ");
	scanf("%d",&n);
	for (int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==n){
				printf("co trong mang o vi tri dong, cot: %d %d",i,j);
				tontai=1; 
			}
		}
	}
	if(!tontai) {
		printf("khong ton tai phan tu trong mang");
	}
	return 0;

	
}
