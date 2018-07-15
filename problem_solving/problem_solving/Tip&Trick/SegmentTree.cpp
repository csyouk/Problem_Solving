//
//  SegmentTree.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 2..
//  Copyright © 2018년 ycs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 1000

int arr[MAX];

int * tree;

// s ~ e : 값들이 저장되어 있는 범위(기준은 원본 데이터)

int init(int * arr, int * tree, int idx, int s, int e){
  if(s==e) return tree[idx] = arr[s];
  int m = (s+e)/2;
  return tree[idx] = init(arr, tree, 2*idx, s, m) +init(arr, tree, 2*idx+1, m+1,e);
}

// s ~ e : 탐색 범위
// l ~ r : 구간 합의 범위

int getSum(int idx, int l, int r, int s, int e){
  if(r < s || e < l) return 0; // 구간 합을 찾으려는 범위가 탐색 범위를 벗어난 경우.
  if(l <= s && e <= r) return tree[idx]; // 탐색 범위가 구간 합의 범위안에 있는 경우.
  int m = (s+e)/2;
  return getSum(2*idx, l, r, s, m) + getSum(2*idx+1, l, r, m+1, e);
}

int main(void){
  
  srand(time(NULL));
//  for (int i=0; i<MAX; i++) arr[i] = (rand() % 1000);
  for (int i=0; i<MAX; i++) arr[i] = i+1;
//  for (int i=1; i < 11; i++) arr[i] = i;
  
  int h = ceil(log2(MAX));
  tree = new int[1 << (h + 1)];
  printf("tree size : %d\n", 1 << (h + 1));
  
  init(arr,tree, 1, 0, MAX-1);
  
  
  printf("total : %d\n", tree[1] );
  printf("interval between %d and %d : %d\n", 1,10, getSum(1, 1, 10, 1, MAX));
  
  return 0;
}



















