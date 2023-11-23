#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,j,min;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int temp,numbers[n];
	printf("nhap vao gia tri cua cac phan tu:\n");
	for(i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	do{
	printf("		MENU\n");
	printf("1. In ra gia tri cac phan tu trong mang.\n");
	printf("2. Su dung Insertion Sort sap xep mang giam dan và in ra.\n");
	printf("3. Su dung selection Sort sap xep mang tang dan và in ra.\n");
	printf("4. Su dung bubble Sort sap xep mang giam dan và in ra.\n");
	printf("5. Thoat\n");
	printf("lua chon cua ban:");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(i=0;i<n;i++){
			printf("%d\t",numbers[i]);
			}
		break;
		case 2:
			printf("Sap xep:");
			for (i=0;i<n;i++){
				int j=i-1;
				int current = numbers[i];
				while (j >=0 && current > numbers[j]){
					numbers[j+1] = numbers[j];
					j--;
				}
				numbers[j+1] = current;
			}
			for(i=0;i<n;i++){
				printf("%d\t",numbers[i]);
			}
		break;
		case 3:
			printf("Sap xep");
			for (i=0;i<n;i++){
				min = i;
				for(j = i + 1; j < n ; j++){
					if(numbers[min] > numbers[j]){
					min = j;
					}
				}
				if(numbers[min] != numbers[i]){
					int temp = numbers[min];
					numbers[min] = numbers[i];
					numbers[i] = temp;
				}	
			}
			for(i=0;i<n;i++){
				printf("%d\t",numbers[i]);
			}
		break;
		case 4:
			printf("Sap xep:");
			for(j=n-1;j>=0;j--){
				for(i=0;i<j;i++){
					if(numbers[i]<numbers[i+1]){
					temp=numbers[i];
					numbers[i]=numbers[i+1];
					numbers[i+1]=temp;
					}
				}
			}
			for(i=0;i<n;i++){		
				printf("%d\t",numbers[i]);
			}
		break;
		case 5:
			exit(0);
		default:
      printf("Lua chon khong phu hop!!!");
	}
	}while(0==0);
	return 0;
}
