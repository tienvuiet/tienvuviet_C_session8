#include<stdio.h>
int main(){
	int n, m;
	printf("nhap vao so dong: ");
	scanf("%d",&n);
	printf("nhap vao so cot: ");
	scanf("%d",&m);
    int array[n][m];
    for (int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		printf("array[%d][%d]= ",i,j);
    		scanf("%d", &array[i][j]);
		}
	}
	int max=array[0][0];
	for(int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if(max<array[i][j]){
				max=array[i][j];
			}
		}
		
	}printf("gia tri lon nhat la: %d", max);
	return 0;
}

