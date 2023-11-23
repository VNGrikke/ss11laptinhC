#include<stdio.h>
int main(){
	int i,n,j;
	int min;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	printf("nhap vao gia tri cua phan tu:\n");
	for (i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	for (i=0;i<n;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(numbers[min]<numbers[j]){
				min = j;
			}
		}
		if(numbers[min]!=numbers[i]){
			int temp = numbers[i];
			numbers[i] = numbers[min];
			numbers[min] = temp;
		}
	}
	 printf("Mang sau khi da sap xep giam dan:\n"); 
	for ( i=0;i<n;i++) {
    	printf("%d\t", numbers[i]);	
	}
}
