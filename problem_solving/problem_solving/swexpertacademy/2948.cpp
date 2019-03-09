////
////  2948.cpp
////  problem_solving
////
////  Created by youkchangsu on 29/09/2018.
////  Copyright © 2018 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_TABLE 1048319
//
//struct Element{
//  char str[60];
//  Element * next;
//};
//Element hash_table[MAX_TABLE];
//Element pool[MAX_TABLE];
//
//int A, B, common, pool_idx;
//int T, t=1;
//
//void solve();
//int hashing(char * c);
//int strCmp(char *a, char *b);
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%d", &T);
//  while (T--) {
//    solve();
//    printf("#%d %d\n", t++, common);
//  }
//  
//  return 0;
//}
//
//
//void solve(){
//  int key;
//  char tmp[60];
//  scanf("%d %d", &A, &B);
//  common = 0; pool_idx = -1;
//
//  
//  while (A--) {
//    scanf("%s", pool[++pool_idx].str);
//    key = hashing(pool[pool_idx].str);
//    if(hash_table[key].next){
//      Element * ptr = hash_table[key].next;
//      while (ptr->next) {
//        ptr = ptr->next;
//      }
//      ptr->next = &pool[pool_idx];
//    }else{
//      hash_table[key].next = &pool[pool_idx];
//    }
//  }
//  
//  while (B--) {
//    scanf("%s", tmp);
//    key = hashing(tmp);
//    if(!hash_table[key].next) continue;
//    
//    Element * ptr = hash_table[key].next;
//    while (ptr) {
//      if(ptr->str[0] == tmp[0] && (!strCmp(tmp, ptr->str))){
//        common++;
//        break;
//      }
//      ptr = ptr->next;
//    }
//  }
//  
//  for (register int i=0; i<MAX_TABLE; i++) {
//    hash_table[i].str[0] = '\0';
//    hash_table[i].next = 0;
//  }
//}
//
//
//int hashing(char * str){
//  int hash = 5381;
//  char c;
//  while (c = *str++) {
//    hash = ((hash << 5) + hash) + c;
//  }
//  hash = hash % MAX_TABLE;
//  if(hash < 0 ) hash += MAX_TABLE;
//  return hash;
//}
//
//int strCmp(char *a, char *b){
//  while ((*a != 0) && (*a == *b)) {
//    a++; b++;
//  }
//  return (*a - *b);
//}
