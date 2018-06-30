////
////  초보자를 위한 점프대 배치하기.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 23..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//#define ABS(X,Y) ((X)>(Y)?((X)-(Y)):((Y)-(X)))
//
//int jump[10000 + 10];
//int result[10000 + 10];
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
//      while (jump[i] <= jump[pivot] && i < last)
//      {
//        i++;
//      }
//      while (jump[j] > jump[pivot])
//      {
//        j--;
//      }
//      if (i < j)
//      {
//        temp = jump[i];
//        jump[i] = jump[j];
//        jump[j] = temp;
//      }
//    }
//    
//    temp = jump[pivot];
//    jump[pivot] = jump[j];
//    jump[j] = temp;
//    
//    quickSort(first, j - 1);
//    quickSort(j + 1, last);
//  }
//}
//
//
//int find(){
//  int N;
//  cin >> N;
//  for (int i=1; i<=N; i++)
//    cin >> jump[i];
//  
//  
//  // 오름차순 정렬
//  quickSort(1, N);
//  
//  // 배치하기.
//  int first = 1, last = N;
//  
//  for (int i=N;;) {
//    result[first++] = jump[i--];
//    if(!i) break;
//    result[last--] = jump[i--];
//    if(!i) break;
//  }
//  
//  int minMax = -1;
//  for (int i=1; i<N; i++) {
//    if( minMax < ABS(result[i], result[i+1]))
//      minMax = ABS(result[i], result[i+1]);
//  }
//  if(minMax < ABS(result[N], result[1]))
//    minMax = ABS(result[N], result[1]);
//  
//  return minMax;
//}
//
//int main(void){
//  int T, t=1;
//  cin >> T;
//  
//  while (T--) {
//    cout << "#" << t++ << " " << find() << endl;
//  }
//  
//  return 0;
//}
