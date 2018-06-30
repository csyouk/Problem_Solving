//
//  array.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 1..
//  Copyright © 2018년 ycs. All rights reserved.
//

#include <stdio.h>
#define SIZE 10000

int arr_idx = 0;

struct NODE{
  int v;
} a[SIZE];

NODE * myalloc(void){ return &a[arr_idx++];}

int main(){
  
  
  return 0;
}
