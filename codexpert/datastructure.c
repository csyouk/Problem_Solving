////
////  datastructure.c
////  codexpert
////
////  Created by youkchangsu on 2018. 4. 15..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//typedef struct _score{
//  int id;
//  int score;
//  int name[10];
//} SCORE;
//
//#define MAX_ST    20
//#define HASH_KEY  10
//#define STEP    1
//#define EMPTY -1
//#define EXIST 1
//#define NOT_EXIST -1
//#define DELETE_SUCCESS -2
//
//SCORE hash_table[MAX_ST];
//
//int get_hash_key(int id){
//  return id % HASH_KEY;
//}
//
//void init_hash_table(void){
//  int i;
//  for (i=0; i<MAX_ST; i++) {
//    hash_table[i].id = -1;
//  }
//}
//
//int insert(SCORE *d){
//  // 원본 키는 벡업해 놓는다.
//  int key = get_hash_key(d->id);
//  int pos = key;
//  
//  while (1)
//  {
//    if ((hash_table[pos].id == NOT_EXIST) || (hash_table[pos].id == DELETED)) {
//      hash_table[pos] = *d;
//      return pos;
//    }
//    pos += STEP;
//    if (pos > MAX_ST-1) pos %= MAX_ST;
//    if (pos == key) return -1;
//  }
//}
