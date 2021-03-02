#include<bits/stdc++.h>

void swap(int *x,int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}


void bubblesort(int A[],int k){
   int i,j;
   for( i = 0;i < k-1;i++){
     for(j = 0;j < k- i - 1;j++){
       if(A[j] > A[j+1]){
         swap(&A[j],&A[j+1]);
       }
     }
   }
}


int main(){

  int A[] = {1,5,964,8,66,2};
  int n = sizeof(A)/sizeof(A[0]);
  bubblesort(A,n);
  return 0;
}
