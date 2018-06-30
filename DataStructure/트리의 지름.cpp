//
//  트리의 지름.cpp
//  DataStructure
//
//  Created by youkchangsu on 2018. 5. 16..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int N, sol=0;
//vector<pair<int,int>> v[10001];
//
//int dfs(int s){
//  int fst=0, snd=0, sum;
//  for(auto n : v[s]){
//    
//    sum = dfs(n.first) + n.second;
//    if(sum > fst){
//      snd = fst;
//      fst = sum;
//    }
//    else if(sum > snd) snd = sum;
//  }
//  if(sol < (fst + snd)) sol = fst+snd;
//  return fst;
//}
//
//int main(void){
//  cin >> N;
//  for (int i=1; i<N; i++) {
//    int p,c,w;
//    scanf("%d%d%d", &p,&c,&w);
//    v[p].push_back(make_pair(c, w));
//  }
//  
//  dfs(1);
//  cout << sol;
//  
//  return 0;
//}
//


