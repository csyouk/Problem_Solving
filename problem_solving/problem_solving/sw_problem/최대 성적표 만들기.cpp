//
//  최대 성적표 만들기.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 4..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//
//int N, K, max;
//int input[100+5];
//
//
//void quickSort(int first, int last)
//{
//  int pivot;
//  int i;
//  int j;
//  int temp;
//  
//  if (first < last)
//  {
//    pivot = first;
//    i = first;
//    j = last;
//    
//    while (i < j)
//    {
//      while (input[i] <= input[pivot] && i < last)
//      {
//        i++;
//      }
//      while (input[j] > input[pivot])
//      {
//        j--;
//      }
//      if (i < j)
//      {
//        temp = input[i];
//        input[i] = input[j];
//        input[j] = temp;
//      }
//    }
//    
//    temp = input[pivot];
//    input[pivot] = input[j];
//    input[j] = temp;
//    
//    quickSort(first, j - 1);
//    quickSort(j + 1, last);
//  }
//}
//
//int main(void){
//  
//  int T, t=1;
//  scanf("%d", &T);
//  
//  while (T--) {
//    int idx=1;
//    scanf("%d %d", &N, &K);
//    int tmp = N;
//    while (tmp--) { scanf("%d", &input[idx++]); }
//    int sum = 0;
//    
//    quickSort(1, N);
//    
//    for (int i=N; i > (N-K); i--) {
//      sum += input[i];
//    }
//    
//    printf("#%d %d\n", t++, sum);
//  }
//  
//  
//  return 0;
//}
