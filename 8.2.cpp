#include<stdio.h>
int main(){
    int number,i,j,a=0;
    	printf("nhap so de kt : ");
    	scanf("%d",&number);
    int arr[2][3]={{1,9,3},{5,4,7}};
    for( i=0 ; i<=1 ; i++){
    	for( j=0 ; j<=2 ; j++){
    	if(arr[i][j]==number){
    		printf("vi tri phan tu trong mang la : dong %d cot %d",i+1,j+1);  
    		a=1;
			break;
		
		}
  
		}
	}
	 if(a==0){
			printf("khong hop le");
			
		}
		return 0;
	}
