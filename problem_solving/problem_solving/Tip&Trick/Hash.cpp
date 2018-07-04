////
////  Hash.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 7. 1..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_TABLE 100000
//
//unsigned long myhash(const char * str){
//  unsigned long hash = 5381;
//  int c;
//  while (c = *str++) {
//    hash = (((hash << 5) + hash) + c) % MAX_TABLE;
//  }
//  return hash % MAX_TABLE;
//}
//
//
//struct NODE{
//  char data[7];
//  NODE *prev;
//} a[20000];
//NODE *hTable[MAX_TABLE];
//
//
//char in[7] = "aaaaaa";
//int key = (int)myhash(in);
//
//
//
