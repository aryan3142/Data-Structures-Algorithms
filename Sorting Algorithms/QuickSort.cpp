#include<bits/stdc++.h>
using namespace std;
//time complexity = o(nlog(n))

void partition(int A[],int low,int high){

  pivot = A[high];
  int i = low - 1;
  for(int j = 0;j < high;j++){
    if(A[j] < pivot){
      i++;
      swap(&A[i],&A[j]);
    }
  }
  swap(&A[i+1],&A[high]);
  return i + 1;
}


//quicksort function
void quicksort(int A[],int low,int high){
  if(low < high){
    pi = partition(A,low,high);
    quicksort(A,0,pi-1);
    quicksort(A,pi+1,high);
  }
}

int main(){
  int A[] = {2,7,4,99,5,11,90,34,6,212};
  int n = sizeof(A)/sizeof(A[0]);
  quicksort(A,0,n-1);
  return 0;
}
