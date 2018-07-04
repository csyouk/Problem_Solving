////
////  SegmentTree.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 7. 2..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//using namespace std;
//
//int test[10] = {1,4,2,3,5,1,2,4,5,3};
//
//class SegmentTree{
//public:
//  int * tree;
//  int * data;
//  int h, treeSize;
//  SegmentTree(int n){
//    data = new int[n];
//    memcpy(data, test, sizeof(int)*n);
//    h = ceil(log2(n));
//    treeSize = 1<<(h+1);
//    tree = new int[treeSize];
//    printf("Tree size : %d / Tree height : %d\n\n", treeSize, h);
//  }
//  ~SegmentTree(){
//    delete[] data;
//    delete[] tree;
//  }
//  
//  int init(int idx, int s, int e){
//    if(s==e) tree[idx] = data[s];
//    else {
//      int left = init(2*idx + 1, s, (s+e)/2);
//      int right = init(2*idx + 2, (s+e)/2 +1, e);
//      tree[idx] = left + right;
//    }
//    return tree[idx];
//  }
//  
//  int sum(int idx, int s, int e, int l, int r){
//    if(s > r || e < l) return 0;
//    else if(s >= l && e <= r) return tree[idx];
//    else{
//      int m = (s+e)/2;
//      int lSum = sum(2*idx+1, s,m, l, r);
//      int rSum = sum(2*idx+2, m+1,e,l,r);
//      return lSum + rSum;
//    }
//  }
//  
//  void update(int change_idx, int diff, int idx, int s, int e){
//    if(change_idx < s || change_idx > e){ return; }
//    tree[idx] = diff;
//    
//    if(s==e) return;
//    
//    int m = (s+e)/2;
//    update(change_idx, diff, 2*idx+1, s, m);
//    update(change_idx, diff, 2*idx+2, m+1, e);
//    
//  }
//  
//};
//
//
//int main(void){
//  int N = 10;
//  SegmentTree sTree = SegmentTree(N);
//  sTree.init(0, 0, N-1);
//  
//  printf("Interval sum between %d and %d : %d\n\n", 3,8, sTree.sum(0, 0, N-1, 3, 8));
//  
//  int changeIdx = 3;
//  int val = 30;
//  int diff = val;
//  
//  
//  cout << "Stop ";
//  
//  return 0;
//}
