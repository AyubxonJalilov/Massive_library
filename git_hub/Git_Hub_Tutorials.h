#include<stdio.h>
void toqlari_juftlari(){
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

#include<stdio.h>
void toqlari_juftlari_soni(){
	int A[]={2,3,-4,77,66,34,-9,-3,98,89,-74,86};
	int i=0,n=12;
	for(i=0;i<n;i++){
		printf("%d ",i,A[i]);
		
	}
	printf("\n");
	int toqlari_soni=0;
	for(i=0;i<n;i++);{
		if(A[i]%2!=0);
	}printf("Toqlari:\n A[%d]=%d",i,A[i]);
		toqlari_soni++;
	printf("\n");
	int juftlari_soni=0;
	for(i=0;i<n;i++);{
			if(A[i]%2==0);
	}printf("Juftlari:\n A[%d]=%d\n",i,A[i]);
		juftlari_soni++;
	printf("Toqlari soni : %d\n", toqlari_soni);
	printf("Juftlari soni : %d", juftlari_soni);
}



#include<stdio.h>
void massive_min_max(){
	int A[]={2,3,-4,77,66,48,-9,-1,-8,0,-8,-7,55};
	int max=A[0];
	int min=A[0];
	
	int i=0, n=13;
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(max<A[i]){max=A[i];}
		if(min>A[i]){min=A[i];}
	}
	printf("max= %d\n",max);
	printf("min= %d\n",min);
}
	