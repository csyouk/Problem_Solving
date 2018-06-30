////
////  연속합.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 7..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//int seq[100010];
//int dp[100010];
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  
//  int N;
//  cin >> N;
//  for (int i=1; i<=N; i++)
//    cin >> seq[i];
//  
//  
//  for (int n = 1; n <= N; n++){
//    if(seq[n] < dp[n-1] + seq[n]){
//      dp[n] = dp[n-1] + seq[n];
//    }else{
//      dp[n] = seq[n];
//    }
//  }
//  
//  int max = dp[1];
//  for (int n = 1; n <= N; n++){
//    if(max < dp[n])
//      max = dp[n];
//  }
//  
//  
//  cout << max;
//  
//  return 0;
//}
