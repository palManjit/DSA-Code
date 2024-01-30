// C implementation of Shell Sort 
#include<stdio.h> 
void shellSort(int arr[], int n) 
{ 
    for (int gap = n/2; gap > 0; gap =gap/2) 
    { 
        for (int i = gap; i < n; i = i+1) 
        { 
            int temp = arr[i]; 
  
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j = j-gap) 
            {
                arr[j] = arr[j - gap]; 
          }
            arr[j] = temp; 
        } 
    } 
} 
  
void printArray(int arr[], int n) { 
    for (int i=0; i<n; i++) 
       printf("%d ", arr[i]); 
} 

void inputArray(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
  
int main() 
{ 
  	int n;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
    inputArray(a,n);
    printf("\n Array before sorting: \n"); 
    printArray(a,n); 
  
    shellSort(a,n); 
  
    printf("\n Array after sorting: \n"); 
    printArray(a,n); 
  
    return 0; 
}
