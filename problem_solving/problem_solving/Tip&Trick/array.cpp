////
////  array.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 7. 1..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//#define SIZE 10000
//
//int arr_idx = 0;
//
//struct NODE{
//  int v;
//  NODE *prev;
//
//} a[SIZE];
//
//NODE * myalloc(void){ return &a[arr_idx++];}
//
//int main(){
//  
//  NODE * pList = NULL;
//  NODE * p;
//  
//  arr_idx = 0;
//  
//  for (int i=1; i<101; i++) {
//    p = myalloc();
//    p->v = i;
//    p->prev = pList;
//    pList = p;
//  }
//
//  
//  for (NODE * pp = pList; pp != NULL; pp= pp->prev)
//    cout << pp->v << " ";
//  return 0;
//}
//
//
//
//
//
