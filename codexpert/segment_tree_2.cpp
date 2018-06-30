//
//  segment_tree_2.cpp
//  codexpert
//
//  Created by youkchangsu on 2018. 6. 28..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int * tree;
int A[10] = {1,4,2,3,5,1,2,4,5,3};

int init(int index, int start, int end)
{
  if(start == end)
    tree[index] = A[start];
  else
    tree[index] = init(index*2 + 1, start, (start+end)/2) + init(index*2+2, (start+end)/2 + 1, end);
  
  return tree[index];
}

int sum(int idx, int start, int end, int left, int right)
{
  if(start > right || end < left) return 0;
  else if(start >= left && end <= right) return tree[idx];
  else{
    int mid = (start + end)/2;
    return sum(2*idx+1, start, mid, left, right) + sum(2*idx+2, mid+1, end, left, right);
  }
}

void update(int changed_index, int diff, int index, int start, int end)
{
  if(changed_index < start || changed_index > end)
    return;
  
  tree[index] += diff;
  
  if(start != end)
  {
    int mid = (start+end)/2;
    update(changed_index, diff, index*2+1, start, mid);
    update(changed_index, diff, index*2+1, mid+1, end);
  }
}

int main(void){
  
  int N = 10;
  int h = ceil(log2(N)); // h is 4
  int tree_size = 1 << (h+1); // tree size : 32
  printf("Tree Size : %d\n", tree_size);
  tree = new int[tree_size];
  init(0,0,N-1);
  
  for (int i=0; i<(1<<5); i++)
    printf("%llu ", tree[i]);
  
  delete[] tree;
  
  return 0;
}




