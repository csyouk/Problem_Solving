////
////  heap.cpp
////  problem_solving
////
////  Created by youkchangsu on 09/10/2018.
////  Copyright © 2018 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_NODE 10
//
//int heap[MAX_NODE + 1];
//int size;
//
//void heapify(int * h, int idx){
//  int large = idx;
//  int left = 2 * idx;
//  int right = 2 * idx + 1;
//  
//  if((left <= size) && (h[left] > h[large]))
//    large = left;
//  
//  if((right <= size) && (h[right] > h[large]))
//    large = right;
//  
//  if(large != idx){
//    int tmp = h[idx];
//    h[idx] = h[large];
//    h[large] = tmp;
//    heapify(h, large);
//  }
//}
//
//int del(int * h){
//  int ret = h[1];
//  h[1] = h[size--];
//  heapify(h, 1);
//  return ret;
//}
//
//
//int main(void){
//  
//  srand((unsigned int)time(NULL));
//  
//  for (int i=1; i<=MAX_NODE; i++) {
//    heap[i] = rand() % 10000;
//    size++;
//  }
//  
//  int idx = MAX_NODE/2;
//
//  do{
//    heapify(heap, idx);
//    
//  }while (--idx);
//  
//  for (int i=1; i<=MAX_NODE; i++) {
//    printf("[%2d] %d\n", i, del(heap));
//  }
//  
//  
//  
//  return 0;
//}
