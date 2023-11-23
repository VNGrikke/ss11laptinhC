#include<stdio.h>
int main(){
	int i,n,j;
	int current;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	printf("nhap vao gia tri cua phan tu:\n");
	for (i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(numbers[i]>numbers[j]){
				current = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = current;
			}
		}
	}
	printf("Mang sau khi da sap xep tang dan:\n"); 
	for(i=0;i<n;i++) {
    	printf("%d\t", numbers[i]);	
	}
}
