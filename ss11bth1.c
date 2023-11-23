#include<stdio.h>
int main(){
	int i,n,j;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	printf("nhap vao gia tri cua phan tu:\n");
	for (i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	for (i=0;i<n;i++){
		int j=i-1;
		int current = numbers[i];
		while (j >=0 && current < numbers[j]){
			numbers[j+1] = numbers[j];
			j--;
		}
		numbers[j+1] = current;
	}
	 printf("Mang sau khi da sap xep tang dan:\n"); 
	for ( i=0;i<n;i++) {
    	printf("%d\t", numbers[i]);	
	}
}

