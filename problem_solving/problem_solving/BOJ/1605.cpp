////
////  1605.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 9. 26..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_TABLE 1000011
//#define MAX(X,Y) (((X) > (Y)) ? (X) : (Y))
//
//int hash_table[MAX_TABLE];
//char str[200001];
//bool found;
//int N;
//
//int pow(int exp) {
//  int sum = 1;
//  while (exp--) {
//    sum = (sum * 2) % MAX_TABLE;
//  }
//  return sum;
//}
//
//int hashing(const char * c, int len) {
//  int key = 0;
//  for (int i = 0; i < len; i++, c++){
//    key = ((key << 1) + *c) % MAX_TABLE;
//  }
//  return key;
//}
//
//bool strCmp(const char *a, const char *b, int n) {
//  for (int i = 0; i < n; i++, a++, b++){
//    if (*a != *b) return false;
//  }
//  return true;
//}
//
//void init() {
//  for (int i = 0; i < MAX_TABLE; i++)
//  {
//    hash_table[i] = -1;
//  }
//  found = false;
//}
//
//bool rka(int n) {
//  int end, weight, key;
//
//  key = hashing(str, n);
//  hash_table[key] = 0;
//  end = N - n;
//  weight = pow(n);
//  for (int i = 1; i <= end; i++) {
//    key = ((key << 1) - str[i - 1] * weight + str[i - 1 + n]) % MAX_TABLE;
//    if (key < 0) key += MAX_TABLE;
//    if (hash_table[key] != -1) {
//      if (strCmp(str + i, str + hash_table[key], n)) {
//        return true;
//      }
//    }
//
//    hash_table[key] = i;
//  }
//  return false;
//}
//
//int main(void) {
//
//  int s, e, n;
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//
//  scanf("%d", &N);
//  scanf("%s", str);
//
//  n = N;
//  s = 0; e = n-1;
//
//  while (s <= e)
//  {
//    init();
//    n = (s + e) >> 1;
//    if (rka(n)) s = n+1;
//    else e = n-1;
//
//  }
//
//  printf("%d", MAX(e, 0));
//
//  return 0;
//}
