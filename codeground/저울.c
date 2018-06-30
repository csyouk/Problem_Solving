//
//  저울.c
//  codeground
//
//  Created by youkchangsu on 2017. 10. 9..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ABS(x,y) (((x) > (y))?((x)-(y)):((y)-(x)))
int N, min = ~(1<<31);
int w[1010];

void DFS(int n, int l, int r){
  int diff = ABS(l,r);
  if(min < diff) return;
  if(n > N){
    if(min > diff) min = diff;
    return;
  }
  
  DFS(n+1, l + w[n], r);
  DFS(n+1, l, r + w[n]);
  
}

int compare(const int * p1, const int * p2){
  return *p1 - *p2;
}
int main(void){
  int i;
  scanf("%d", &N);
  for (i=1; i<=N; i++) {
    scanf("%d", &w[i]);
  }
  
  qsort(&w[1], N, sizeof(int), compare);
  
  DFS(1, 0, 0);
  
  printf("%d", min);
  
  return 0;
}
