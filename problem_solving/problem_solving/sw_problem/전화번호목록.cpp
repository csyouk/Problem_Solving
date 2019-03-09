////
////  전화번호목록.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 9. 25..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#define INF (1<<31)
//#define MAX_TABLE 10007
//typedef unsigned long long ull;
//
//struct Data {
//  ull num;
//  Data * next;
//  
//};
//
//Data hash_table[MAX_TABLE];
//Data pool[MAX_TABLE];
//int Pointer;
//bool flag = false;
//
//bool hash_n_chk(const char * str){
//  ull c;
//  ull hash = 5381;
//  ull sum = 0;
//
//  while (c = *str++) {
//    sum *= 10;
//    sum += (c-'0');
//    hash = (((hash<<5) + (c-'0')) % MAX_TABLE);
//    if(hash_table[hash].next){
//      Data * ptr = hash_table[hash].next;
//      while (ptr) {
//        if(ptr->num == sum){
//          return true;
//        }
//        ptr = ptr->next;
//      }
//    }
//  }
//  
//  Data * ptr = hash_table[hash].next;
//  pool[Pointer].num = sum;
//  pool[Pointer].next = 0;
//  if(ptr == NULL){
//    hash_table[hash].next = &pool[Pointer++];
//    return false;
//  }
//  
//  while (ptr->next) ptr = ptr->next;
//  
//  ptr->next = &pool[Pointer++];
//  
//  return false;
//}
//
//
//void init()
//{
//  for (int i=0; i<MAX_TABLE; i++) {
//    hash_table[i].num = 0;
//    hash_table[i].next = 0;
//  }
//  Pointer = 0;
//  flag = false;
//}
//
//int main(void){
//  
//  int T, n;
//  char num[12];
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%d", &T);
//  
//  while (T--) {
//    scanf("%d", &n);
//    
//    while (n--) {
//      scanf("%s", num);
//      
//      if(hash_n_chk(num)){
//        flag = true;
//        break;
//      }
//      
//    }
//    
//    if(flag){
//      printf("NO\n");
//    }else{
//      printf("YES\n");
//    }
//    
//    init();
//  }
//  
//  
//  return 0;
//}
