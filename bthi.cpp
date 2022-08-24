#include <stdio.h>
int main(){
	int n;
	float s;
	s = 0;
	do{
		printf("\n nhap vao n: ");
		scanf("%d", &n);
		if(n<1){
			printf("\n so n>=1, vui long nhap lai!"); 
		}
	}while(n<1);
	for(int i=1;i<n;i++){
		s = s+1.0/i ;
	} 
	printf("\nTong 1+1/2+...+1/n%d la: %.2f",n,s); 
} 
