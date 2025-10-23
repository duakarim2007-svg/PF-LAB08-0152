#include <stdio.h>
int main(){
	int max=0;
	int min=1000;
	int array1[3][3]={{12 , 45, 32},{2 , 13, 45},{56 , 72, 41}};
	int i , j ;
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			if (array1[i][j]>max){
				max=array1[i][j];
			}
		}
}
	for (i=0 ; i<3 ; i++){
		for(j=0 ;j<3 ; j++){
			if (array1[i][j]<min){
				min=array1[i][j];
			}
		}
}
	printf("maximum number is %d\n" , max);
	printf("minimum number is %d" , min);
	
	}
	
	
