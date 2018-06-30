//
//  동아리실 관리하기.cpp
//  DataStructure
//
//  Created by youkchangsu on 2018. 5. 17..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//
//
//#include <stdio.h>
//#include <string.h>
//#define MAX_N 10001
//#define DIV 1000000007
//unsigned long dp[MAX_N][8];
//unsigned long lut[4][8];
//
//void makeLut(){
//  for (int i=0; i<4; i++) {
//    int cnt = 0;
//    for (int j=0; j<16; j++) {
//      if(j&(1<<i)){
//        lut[i][cnt++] = j;
//      }
//    }
//  }
//}
//
//int main(void)
//{
//  int test_case;
//  int T;
//
//  setbuf(stdout, NULL);
//  scanf("%d", &T);
//
//  char shouldBe[MAX_N];
//  
//  for (test_case = 1; test_case <= T; ++test_case)
//  {
//    scanf("%s", shouldBe);
//    
//    unsigned long len = strlen(shouldBe);
//
//    for (int i=0; i < len; i++){
//      shouldBe[i] -= 'A';
//      for (int j=0; j < 8; j++)
//        dp[i][j] = 0;
//    }
//
//    makeLut();
//    for (int i=0; i<8; i++)
//      if(lut[shouldBe[0]][i] & 1)
//        dp[0][i] = 1;
//    
//    
//    
//    for (register unsigned long i=1; i < len; i++)
//      for (register unsigned long y=0; y<8; y++)
//        for (register unsigned long t=0; t<8; t++)
//          if(lut[shouldBe[i-1]][y] & lut[shouldBe[i]][t])
//            dp[i][t] = (dp[i-1][y] + dp[i][t]) % DIV;
//
//    unsigned long sum = 0;
//    for (register unsigned long i=0; i<8; i++)
//      sum = (sum + dp[len-1][i]) % DIV;
//    
//    printf("#%d %d\n", test_case, sum);
//  }
//  return 0;
//}
