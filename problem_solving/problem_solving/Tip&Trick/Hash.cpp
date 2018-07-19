//
//  Hash.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 1..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//
//#define MAX_KEY 64
//#define MAX_DATA 128
//#define MAX_TABLE 4096
//
//unsigned long myhash(const char *str){
//  unsigned long hash = 5381;
//  int c;
//  while (c = *str++)
//    hash = (((hash << 5) + hash) + c) % MAX_TABLE;
//  
//  return hash % MAX_TABLE;
//}



//#include < stdio.h >
//
//struct DATA{
//  int a1,a2,a3;
//  DATA(){}
//  DATA(int a1, int a2, int a3):a1(a1), a2(a2), a3(a3){}
//  bool operator ==(const DATA &A) const{
//    return a1 == A.a1 && a2 == A.a2 && a3 == A.a3;
//  }
//  bool operator !=(const DATA &A) const{
//    return a1 != A.a1 && a2 != A.a2 && a3 != A.a3;
//  }
//};
//
//
//class HashTable{
//
//public:
//  const static int SIZE = 10000;
//  struct NODE{
//    DATA value;
//    NODE * next;
//    NODE(){}
//    NODE(DATA value, NODE * next):value(value),next(next){}
//  };
//  NODE * table[SIZE];
//  HashTable(){for(int i=0;i< SIZE;i++) table[i]=NULL;}
//
//  int hash(DATA &A){return (A.a1 + A.a2 + A.a3) % SIZE;}
//
//  void insert(DATA key){
//    int index = hash(key);
//    table[index] = new NODE(key, table[index]);
//  }
//
//  void remove(DATA key){
//    int index = hash(key);
//    NODE *prev = NULL, * it = table[index];
//    while(it != NULL && it->value!=key){
//      prev=it; it = it->next;
//    }
//    if(it==NULL) return;
//    if(prev==NULL){
//      table[index] = table[index]->next;
//    }else{
//      prev->next = it->next;
//    }
//  }
//
//  bool search(DATA key){
//    int index = hash(key);
//    NODE * it = table[index];
//    while(it!=NULL){
//      if(it->value == key) return true;
//      it=it->next;
//    }
//    return false;
//  }
//}
//
//
//
//
//int main(void){
//
//  HashTable table;
//  DATA key1(1,2,3); DATA key2(3,6,9);
//  DATA key3(2,5,8); DATA key4(10,10,6);
//
//  table.insert(key1);
//  table.insert(key2);
//  table.insert(key3);
//  table.insert(key4);
//
//  if(table.search(key1))
//    puts("key1 found");
//  else
//    puts("key1 not found");
//
//  table.remove(key1);
//
//  if(table.search(key1))
//    puts("key1 found");
//  else
//    puts("key1 not found");
//
//
//
//
//  return 0;
//}
