#include<stdio.h>
void toqlari_juftlari (){
	int A[]={2,3,-4,77,66,34,-9,-3,98,89,-74,86};
	int i=0,n=12;
	for(i=0;i<n;i++){
		printf("%d ",i,A[i]);
		
	}
	printf("\n");
	int toqlari_soni=0;
	for(i=0;i<n;i++){
		if(A[i]%2!=0){
			printf("Toqlari:\n A[%d]=%d\n",i,A[i]);
		toqlari_soni++;
		}
		
	}
	printf("\n");
	int juftlari_soni=0;
	for(i=0;i<n;i++){
			if(A[i]%2==0){
				printf("Juftlari:\n A[%d]=%d\n",i,A[i]);
		juftlari_soni++;
			}
		
	}
	printf("Toqlari soni : %d\n", toqlari_soni);
	printf("Juftlari soni : %d\n", juftlari_soni);
}

int main ()
{
	toqlari_juftlari();
}