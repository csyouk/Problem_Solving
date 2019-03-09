////
////  검정시험용_hash구현연습.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 9. 17..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_TABLE 100
//
//typedef unsigned long ul;
//typedef unsigned long long ull;
//
//struct Data{
//  int id;
//  char body[30];
//  Data * next;
//};
//
//Data db[100 + 10];
//Data hash_table[MAX_TABLE];
//
//int idx_table[100+10];
//
//ul hashing(const char * str){
//  unsigned long hash = 5381;
//  int c;
//  while (c = *str++) {
//    hash = ((hash << 5) + c) % MAX_TABLE;
//  }
//  return hash % MAX_TABLE;
//}
//
//void insert(const char * _key, Data * data){
//  ul key = hashing(_key);
//  // hashing 했을 시 겹치는 id가 몇개인지 기록.
////  printf("Key : %s | Hash ID : %d\n", _key, key);
//  idx_table[key]++;
//
//#if 0
//  
//  // linear probing으로 검사후 open addressing 방식으로 기록.
//  while(hash_table[key].id) {
//    key++;
//    if(key==MAX_TABLE) key=0;
//  }
//  hash_table[key].id = data->id;
//  memcpy(hash_table[key].body, data->body, sizeof(char [30]));
//#endif
//  
//#if 1
//  // chaining method 방식.
//  if(hash_table[key].next == NULL){
//    hash_table[key].next = data;
//    return;
//  }
//  
//  Data * ptr = hash_table[key].next;
//  while (ptr->next) {
//    ptr = ptr->next;
//  }
//  ptr->next = data;
//  
//#endif
//}
//
//void input(){
//  int N, idx=0;
//  scanf("%d", &N);
//  
//  while (N--) {
//    db[idx].id = idx;
//    scanf("%s", db[idx++].body);
//  }
//  
//}
//
//void insert_all(){
//  for (int i=0; i<100; i++)
//    insert(db[i].body, (db + i));
//}
//
//int main(void){
//  
//  FILE * fp = freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in.txt", "r", stdin);
//  input();
//  
//  insert_all();
//  
//  fclose(fp);
//  fflush(fp);
//  
//#if 1
//  printf("---------\n");
//  for (int idx=0; idx<MAX_TABLE; idx++) {
//    printf("Index : %2d | Cnt : %d\n", idx, idx_table[idx]);
////    printf("[DB  ] ID : %d / body : %s\n", db[idx].id, db[idx].body);
////    printf("[HASH] ID : %d / body : %s\n\n", hash_table[idx].id, hash_table[idx].body);
//  }
//#endif
//  
//  return 0;
//}
//
//
