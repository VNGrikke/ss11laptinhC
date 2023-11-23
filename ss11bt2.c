#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,m,j,x;
	printf("nhap vao so hang va cot cua mang:");
	scanf("%d %d",&n,&m);
	int temp,numbers[n][m];
	printf("nhap vao gia tri cua cac phan tu:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("numbers[%d][%d]=",i,j);
		scanf("%d",&numbers[i][j]);
		}
	}
	do{
	printf("		MENU\n");
	printf("1. In ra gia tri cac phan tu trong mang.\n");
	printf("2. Sap xep mang theo dong tang dan và in ra.\n");
	printf("3. Sap xep mang theo cot giam dan và in ra.\n");
	printf("4. Thoat\n");
	printf("lua chon cua ban:");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("cac phan tu trong mang:\n");
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("%d\t",numbers[i][j]);
				}
				printf("\n");
			}
		break;
		case 2:
			printf("Sap xep:\n");
			for( i=0;i<n;i++){
					for( j=0;j<m-1;j++){
						for( x=0;x<m-j-1;x++){
						    if(numbers[i][x]>numbers[i][x+1]){
							    temp=numbers[i][x];
							    numbers[i][x]=numbers[i][x+1];
							    numbers[i][x+1]=temp;
						    }
					    }
				    }
				}
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("%d\t",numbers[i][j]);
				}
				printf("\n");
			}
		break;
		case 3:
			for( j=0;j<m;j++){
				for( i=0;i<n-1;i++){
					for( x=0;x<n-i-1;x++){
					    if(numbers[x][j]<numbers[x+1][j]){
						    temp=numbers[x][j];
						    numbers[x][j]=numbers[x+1][j];
							numbers[x+1][j]=temp;
					    }
				    }
			    }
			}
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("%d\t",numbers[i][j]);
				}
				printf("\n");
			}
		break;
		case 4:
			exit(0);
		default:
      printf("Lua chon khong phu hop!!!");
	}
	}while(0==0);
	return 0;
}
