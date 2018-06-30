//
//  quicksort.cpp
//  codexpert
//
//  Created by youkchangsu on 2018. 6. 10..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//
//
//#include <iostream>
//using namespace std;
//#define MAX 10
//int data[MAX];
//
//void quicksort(int *, int, int);
//int partition(int *, int, int);
//void swap(int &, int &);
//int main(void){
//  
//  for (int i=0; i<MAX; i++)
//    data[i] = std::rand()%10000;
//  
//  
//  quicksort(data, 0, MAX-1);
//  for (int i=0; i<MAX; i++)
//    cout << data[i] << " ";
//  return 0;
//}
//
//void quicksort(int data[], int low, int high){
//  if(low < high){
//    
//    int pivot = partition(data, low, high);
//    quicksort(data, low, pivot-1);
//    quicksort(data, pivot, high);
//  }
//}
//
//int partition(int data[], int low, int high){
//  int pivot = data[high];
//  int i = low;
//  for (int j = low; j < high; j++) {
//    if(data[j] <= pivot){
//      swap(data[i++], data[j]);
//    }
//  }
//  swap(data[i], data[high]);
//  return i;
//}
//void swap(int & a, int & b){
//  int tmp = a;
//  a = b;
//  b = tmp;
//}
