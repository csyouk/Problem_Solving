//
//  mergesort.c
//  codeground
//
//  Created by youkchangsu on 2017. 10. 5..
//  Copyright © 2017년 youkchangsu. All rights reserved.
// 내림차순 구현.
#if 0

#include <stdio.h>
#define DATA_SIZE (sizeof(data)/sizeof(data[0]))

int data[]= {-30,-80,-20,10,80,10,0,2,5,-3,-5,-9,111,-342,-343,14,156,232};
int tmp[20];

void Merge(int s, int e, int m, int * d){
  int idx1, idx2, idxtmp;
  idx1 = s; idx2 = m + 1; idxtmp = s;
  
  while (idx1 <= m && idx2 <= e) {
    if(data[idx1] < data[idx2]){
      tmp[idxtmp++] = data[idx1++];
    } else {
      tmp[idxtmp++] = data[idx2++];
    }
  }
  
  if(idx1 <= m){
    while(idx1 <= m) tmp[idxtmp++] = data[idx1++];
  } else {
    while(idx2 <= e) tmp[idxtmp++] = data[idx2++];
  }
  
  for (idxtmp = s; idxtmp <= e; idxtmp++) {
    data[idxtmp] = tmp[idxtmp];
  }
}

void MergeSort(int s, int e, int * d){
  
  int m;
  if(e <= s) return;
  
  m = (s + e)/2;
  
  MergeSort(s, m, d);
  MergeSort(m+1, e, d);
  
  Merge(s, e, m, d);
}

int main(void){
  int i;
  MergeSort(0, DATA_SIZE - 1, data);
  
  for (i=0; i<DATA_SIZE; i++) printf("%d ", data[i]);
  
  return 0;
}
#endif






