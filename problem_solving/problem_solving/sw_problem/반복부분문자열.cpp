////
////  반복부분문자열.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 9. 26..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_LEN 200000
//#define MAX_TABLE 104831
//typedef unsigned int ul;
//
//struct String{
//  int startIdx;
//  String * next;
//  String(){};
//  String(int idx){
//    startIdx = idx;
//    next = 0;
//  };
//};
//
//String hash_table[MAX_TABLE];
//char str[MAX_LEN + 1000];
//bool found;
//
//ul hashing(char * c, ul m){
//  ul hash = 0;
//  
//  for (int i=0; i<m; i++, c++) {
//    hash = ((hash << 1) + (*c)) % MAX_TABLE;
//  }
//  return hash;
//}
//
//int strCmp(const char *a, const char *b){
//  while (*a++ - *b++);
//  return (*a - *b);
//}
//
//
//
//void init(){
//  for (int i=0; i<MAX_TABLE; i++) {
//    hash_table[i].startIdx = 0;
//    hash_table[i].next = 0;
//  }
//}
//
//int main(void){
//  int N, n;
//
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%d", &N);
//  scanf("%s", str);
//  n = N;
//  
//  while (n--) {
//    ul key = hashing(str, n);
//    hash_table[key].next = new String(0);
//
//    int end = N - n;
//    for (int i=1; i <= end; i++) {
//
//      key = ((key << 1) - str[i-1]*(1<<(n)) + str[i-1 + n]) % MAX_TABLE;
//
//      if(hash_table[key].next){
//        String * ptr = hash_table[key].next;
//        while (ptr->next) {
//          if(!strCmp(&str[i], &str[ptr->next->startIdx])){
//            found = true;
//            break;
//          }
//          ptr = ptr->next;
//        }
//        if(found) break;
//        ptr->next = new String(i);
//      }else{
//        hash_table[key].next = new String(i);
//      }
//    }
//    if(found) break;
//    init();
//  }
//
//  if(n<0) printf("0");
//  else printf("%d", n);
//  return 0;
//}
//
//
