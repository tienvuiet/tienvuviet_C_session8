#include<stdio.h>
int main (){
	int n, m;
	printf("nhap vao so hang: ");
	scanf("%d",&n);
	printf("nhap vao so cot: ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
    int tong=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
        if(i==0||i==n-1||j==0||j==m-1){
          tong=tong+a[i][j];
      }
}}
    printf("tong cac phan tu o ria mang la: %d", tong);
    return 0;
}
