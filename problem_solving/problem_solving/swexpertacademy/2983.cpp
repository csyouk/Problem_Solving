////
////  2983.cpp
////  problem_solving
////
////  Created by youkchangsu on 30/09/2018.
////  Copyright © 2018 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_TABLE 1000011
//#define MAX(X,Y) (((X)>(Y)) ? (X) : (Y))
//
//int T, S, min, mid, max, t=1;
//char L[200000 + 10];
//int hash_table[MAX_TABLE];
//
//bool str_n_cmp(char *a, char *b, int n){
//  for (register int i = 0; i < n; i++, a++, b++) {
//    if(*a != *b) return false;
//  }
//  return true;
//}
//
//int hashing(char * c, int n){
//  int hash = 0;
//  for (register int i = 0; i<n; i++, c++) {
//    hash = ((hash << 1) + *c) % MAX_TABLE;
//  }
//  return hash;
//}
//
//int pow(int exp){
//  int product = 1;
//  while (exp--) {
//    product = (product << 1) % MAX_TABLE;
//  }
//  return product;
//}
//
//bool rabin_karp(int m){
//  int key = hashing(L, m);
//  int end = S - m;
//  int w = pow(m);
//  
//  hash_table[key] = 0;
//
//  for (register int i = 1; i <= end; i++) {
//    key = ((key << 1) - L[i-1] * w + L[i-1+m]) % MAX_TABLE;
//    if(key < 0) key+= MAX_TABLE;
//    if(hash_table[key] != -1){
//      if(str_n_cmp(&L[hash_table[key]], &L[i], m)){
//        return true;
//      }
//    }
//    hash_table[key] = i;
//  }
//  
//  return false;
//}
//
//
//
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%d", &T);
//  while (T--) {
//    scanf("%d %s", &S, L);
//    min = 0; max = S-1;
//
//    
//    while (min <= max) {
//      for (register int i=0; i<MAX_TABLE; i++) hash_table[i] = -1;
//      mid = (min + max) >> 1;
//      
//      if(rabin_karp(mid)){
//        min = mid + 1;
//      }else{
//        max = mid - 1;
//      }
//    }
//    
//    
//    printf("#%d %d\n", t++, MAX(max, 0));
//  }
//  
//  
//  return 0;
//}
