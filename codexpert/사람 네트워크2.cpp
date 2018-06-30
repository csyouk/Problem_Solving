////
////  사람 네트워크2.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 7..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//
//int dp[101][10];
//
//int main(void){
//  int N;
//  int div = 1000000000;
//
//  std::cin >> N;
//
//  for (int i=1; i<10; i++)
//    dp[1][i] = 1;
//
//
//
//  for (int i=1; i<N; i++) {
//    for (int j=0; j<9; j++) {
//      dp[i+1][j+1] += dp[i][j];
//      dp[i+1][j+1] %= div;
//    }
//    for (int j=1; j<10; j++) {
//      dp[i+1][j-1] += dp[i][j];
//      dp[i+1][j-1] %= div;
//    }
//  }
//
//
//  int sum = 0;
//  for (int i=0; i<10; i++) {
//    sum = (sum + dp[N][i]) % div;
//  }
//
//
//  std::cout << sum;
//
//  return 0;
//}
//
////#include <stdio.h>
////#define mod 1000000000
////int main(void){
////  int N;
////  int Dp[101][10] = {};
////  int sum = 0;
////  scanf("%d", &N);
////  for (int i = 0; i < 10; i++)
////    Dp[1][i] = 1;
////  for (int i = 2; i <= N; i++){
////    for (int j = 0; j < 10; j++){
////      if (j == 0)
////        Dp[i][0] = Dp[i - 1][1] % mod;
////      else if (j == 9)
////        Dp[i][9] = Dp[i - 1][8] % mod;
////      else
////        Dp[i][j] = (Dp[i - 1][j - 1] + Dp[i - 1][j + 1]) % mod;
////    }
////  }
////  for (int i = 1; i < 10; i++)
////    sum = (sum + Dp[N][i]) % mod;
////  printf("%d\n", sum%mod);
////}
//
//
//
