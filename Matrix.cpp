//2. Matrix Multiplication
#include<stdio.h>
#define ROW 10
#define COL 10

void inputMatrix(int a[][COL], int r, int c){
	for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
    	}
	}
}

void printMatrix(int a[][COL], int r, int c){
	printf("\n Matrix:\n");
	for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
			printf("%d ",a[i][j]);
    	}
    	printf("\n");
	}
}

void multiplyMatrix(int a[][COL], int r1, int c1, int b[][COL], int r2, int c2, int c[][COL]){
	int i,j,k,t;
	for(i=0;i<r1;i++){		
    	for(j=0;j<c2;j++){			
			t=0;				
			for(k=0;k<c1;k++){
	   			t = t + a[i][k]*b[k][j];
			}
			c[i][j] = t;
    	}
	}	
}

int main(){
	int a[ROW][COL], b[ROW][COL], c[ROW][COL], r1,c1,r2,c2;
	printf("\n Enter number of rows & columns of a Matrix-I:");
	scanf("%d%d",&r1,&c1);
	printf("\n Enter number of rows & columns of a Matrix-II:");
	scanf("%d%d",&r2,&c2);
	if(c1 == r2){
		printf("\n Enter matrix I:");
		inputMatrix(a,r1,c1);
		printf("\n Enter matrix II:");
		inputMatrix(b,r2,c2);
		multiplyMatrix(a,r1,c1,b,r2,c2,c);
		printf("\n Resultant Matrix:\n");
		printMatrix(c,r1,c2);
	}
	else
		printf("\n Matrix multiplication is not possible");
}
