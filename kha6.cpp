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
    printf("cac phan tu duong cheo chinh la:");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
        if(i==j){
        printf("%d",a[i][j]);
      }
}}

    return 0;
}
