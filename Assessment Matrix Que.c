#include <stdio.h>
main(){
	printf("\t Matrix Multiplication. \n");
	
		// Declaration.
		
	int a[3][3],b[3][3],c[3][3];
	int i,j,k;
	
		// Take the Matrix-A input from user.
		
	printf("\n----------------- Matrix A------------------- \n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\n Enter the Element of Matrix A : a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
		// Display elements of Matrix-A in Matrix format.
		
	printf("\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	
		// Take the Matrix-B input from user.
		
	printf("\n----------------- Matrix B------------------- \n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\n Enter the Element of Matrix B : b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	   // Display elements of Matrix-B in Matrix format.
	
	printf("\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",b[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	
		//Process of Multiplication Of Two Matrix.
		
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			c[i][j]=0;
			for (k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
		//Display the Result Of Multiplication of 2-D Matrix.
		
	printf("\n-------Multiplication of Two Matrix---------- \n");
	printf("\n");
		for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}
}

