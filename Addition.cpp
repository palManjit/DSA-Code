//1. Matrix Addition
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

void addMatrix(int a[][COL], int b[][COL], int r1, int c1, int c[][COL]){
	for(int i=0;i<r1;i++){
    	for(int j=0;j<c1;j++){
    		c[i][j] = a[i][j] + b[i][j];
    	}
    }
}

int main(){
	int a[ROW][COL], b[ROW][COL], c[ROW][COL], r1,c1,r2,c2;
	printf("\n Enter number of rows & columns of a Matrix-I:");
	scanf("%d%d",&r1,&c1);
	printf("\n Enter number of rows & columns of a Matrix-II:");
	scanf("%d%d",&r2,&c2);
	if(r1 == r2 && c1 == c2){
		printf("\n Enter matrix I:");
		inputMatrix(a,r1,c1);
		printf("\n Enter matrix II:");
		inputMatrix(b,r2,c2);
		addMatrix(a, b, r1, c1, c);
		printf("\n Resultant Matrix:\n");
		printMatrix(c,r1,c1);
	}
	else
		printf("\n Matrix addition is not possible");
} 
























