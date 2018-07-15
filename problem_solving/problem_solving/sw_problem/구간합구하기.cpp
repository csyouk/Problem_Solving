//
////  구간합구하기.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 7. 9..
////  Copyright © 2018년 ycs. All rights reserved.
//
//
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//ll * tree;
//ll arr[1000000 + 100];
//
//ll init(int idx, int s, int e){
//  if(s==e){return tree[idx] = arr[s];}
//  int m = (s+e)/2;
//  return tree[idx] = init(2*idx+1, s, m) + init(2*idx+2, m+1,e);
//}
//
//ll intervalSum(int idx, int s, int e, int l, int r){
//  if(s > r || e < l) return 0;
//  else if(s >= l && e <= r) return tree[idx];
//
//  int m = (s+e)/2;
//  return intervalSum(2*idx+1, s, m, l, r) + intervalSum(2*idx+2, m+1,e,l,r);
//}
//
//void update(int targetIdx, ll diff, int idx, int s, int e){
//  if(targetIdx < s || e < targetIdx) return;
//  tree[idx] += diff;
//  if (s==e) return;
//  int m = (s+e)/2;
//  update(targetIdx, diff, 2*idx+1, s, m);  update(targetIdx, diff, 2*idx+2, m+1, e);
//}
//
//inline unsigned int pow(int b, int e){
//  int result = 1;
//  while (e--) {
//    result *= b;
//  }
//  return result;
//}
//
//int main(void){
//
//  int N, M, K;
//
//  cin >> N >> M >> K;
//
////  for (int i=0; i<N; i++)
////    cin >> arr[i];
//
//  int h = 0;
//  while(!((pow(2,h) <= N )&&( N < pow(2, h+1) ))) h++;
//
//  tree = new ll[(1<<(h+2)) + 10];
//  init(0,0,N-1);
//
//
//  int a,b,c;
//  int C = M+K;
//  for (int i=0; i<C; i++) {
//    cin >> a >> b >> c;
//    if(a==1){
//      ll diff = c - arr[b-1];
//      arr[b-1] = c;
//      update(b-1, diff, 0, 0, N-1);
//    }else{
//      cout << intervalSum(0, 0, N-1, b-1, c-1) << endl;
//    }
//  }
//
//  return 0;
//}
