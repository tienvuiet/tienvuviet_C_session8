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
    printf("cac phan tu duong cheo phu la:\n");
	for(int i=0,j=m-1;i<n&&j>=0;i++,j--){
        tong+=a[i][j];
        printf("%2d\n",a[i][j]);
}  
    printf("tong cua cac phan tu duong cheo phu la: %d",tong);

    return 0;
}
