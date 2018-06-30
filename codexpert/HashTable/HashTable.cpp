////
////  HashTable.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 6. 24..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//#include "HashTable.hpp"
//
//using namespace std;
//
//struct DATA{
//  string str;
//  DATA(){};
//  DATA(string str):str(str){}
//  bool operator == (const DATA &A) const{
//    return str == A.str;
//  }
//  bool operator != (const DATA &A) const{
//    return str != A.str;
//  }
//  bool operator < (const DATA &A) const{
//    return str < A.str;
//  }
//  bool operator > (const DATA &A) const{
//    return str > A.str;
//  }
//};
//
//class HashTable{
//public:
//  const static int SIZE = 10000;
//  struct NODE{
//    DATA val;
//    NODE * next;
//    NODE(){}
//    NODE(DATA val, NODE * next):val(val),next(next){}
//  };
//  NODE * table[SIZE];
//  HashTable(){
//    for (int i=0; i<SIZE; ++i) {
//      table[i] = NULL;
//    }
//  }
//  size_t hash(DATA &A){
//    size_t val = 0;
//    const char * str = A.str.c_str();
//    size_t len = strlen(str);
//    val += str[0];
//    for (int i=1; i<len; i++) {
//      val += i*(1<<8) * str[i];
//    }
//    return val % SIZE;
//  }
//  
//};
//
//int main(void){
//  
//  string str1;
//  str1 = "hello world";
//  HashTable * table = new HashTable();
//  
//  DATA data(str1);
//  cout << table->hash(data);
//  
//  return 0;
//}
