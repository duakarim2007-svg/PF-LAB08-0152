#include <stdio.h>
int main(){
	char classroom[5][5];
	int students=0 , empty = 0 , total= 25 , i , j;
	for (i=0 ; i<5 ; i++){
		for (j=0 ; j<5 ; j++){
			if ((i+j)%2==0){
				classroom[i][j]='x';
				students++;
			} else {
				classroom[i][j]='o';
				empty++;
				
			}
		}
	}
	printf("Classroom seating chart:\n");
	printf("========================\n");
	printf("(x=student , o = Empty)\n\n");
	for (i = 0 ; i<5 ; i++){
		printf("Row %d: " , i + 1);
		for (j=0 ; j<5 ; j++){
			printf("%c" , classroom[i][j]);
		}
		printf("\n");
	}
	printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", total);
     return 0;
}
	 
