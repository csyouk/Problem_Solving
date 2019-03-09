////
////  2110.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 9. 27..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//typedef unsigned long ul;
//
//ul N, C;
//ul data[1<<20];
//ul idx;
//
//void swap(ul * a, ul * b) {
//  ul t = *a;
//  *a = *b;
//  *b = t;
//}
//
//void quickSort(ul left, ul right) {
//  ul pivot = left;
//  ul j = pivot;
//  ul i = left+1;
//  
//  if (left < right) {
//    for (; i <= right; i++) {
//      if (data[i] < data[pivot]) {
//        j++;
//        swap(&data[j], &data[i]);
//      }
//    }
//
//    swap(&data[left], &data[j]);
//    pivot = j;
//    
//    quickSort(left, pivot-1);
//    quickSort(pivot+1, right);
//  }
//  
//}
//
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%lu %lu", &N, &C);
//  while (N--) scanf("%lu", data + idx++);
//  
//  quickSort(0, idx-1);
//  
//                    
//  return 0;
//}
