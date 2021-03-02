#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}


void heapify(int A[],int k,int n){

  int greatest = k;
  int l = 2*k + 1;
  int r = 2*k + 2;

  if( l < n && A[l] > A[k]){
    greatest = l;
  }
  if( r < n && A[r] > A[greatest]){
    greatest = r;
  }
  if(greatest != k){
    swap(&A[k],&A[greatest]);
    heapify(A,greatest,n);
  }
}

void heapsort(int A[],int n){
  //creating a heap
  //o(n)
  for(int i = n/2 -1;i>=0;i--){
    heapify(A,i,n);
  }
  //heapsort
  //o(nlog(n))
  for(int i = n - 1;i>=1;i--){
    swap(&A[i],&A[0]);
    heapify(A,0,i);
  }
}

int main(){
  int A[] = {2,7,4,99,5,11,90,34,6,212};
  int n = sizeof(A)/sizeof(A[0]);
  heapsort(A,n);
  return 0;
}
