////
////  숫자삼각형.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 6..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//unsigned int N;
//unsigned int t[500][500];
//unsigned int dp[500][500];
//
//unsigned int Max = 0;
//
//int main(void){
//  
//  cin >> N;
//  for (int i=0; i<N; i++)
//    for (int j=0; j<i+1; j++)
//      cin >> t[i][j];
//  
//  dp[0][0] = t[0][0];
//  
//  for (int i=0; i<N; i++){
//    for (int j=0; j<i+1; j++){
//      if(dp[i+1][j] < dp[i][j] + t[i+1][j])
//        dp[i+1][j] = dp[i][j] + t[i+1][j];
//      if(dp[i+1][j+1] < dp[i][j] + t[i+1][j+1])
//        dp[i+1][j+1] = dp[i][j] + t[i+1][j+1];
//    }
//  }
//  
//  for (int i=0; i<N; i++){
//    if(Max < dp[N-1][i])
//      Max = dp[N-1][i];
//  }
//  cout << Max;
//  return 0;
//}
