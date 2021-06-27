#include <stdio.h>

void swap_max(int arr[], int l, int n){
  
  int lar = arr[n],pos=n;
  for (int i=n; i<l; i++){  
    if ( arr[i]>lar){
      lar = arr[i];
      pos = i;
    }
    
  }
  int temp = arr[n];
  arr[n] = arr[pos];
  arr[pos] = temp;
}
  
void ssort(int arr[], int l){
	
	for ( int i=0;i<l;i++){
		swap_max(arr,l,i);
		}
}
	
