//
//  digitSum.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 4..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//typedef unsigned long long llu;
//llu sol;
//
//llu digitSum(llu num){
//  
//  llu tmp = num/10;
//  if(!tmp){ return num; }
//  else{
//    llu sum = 0;
//    while (num) {
//      sum += (num % 10);
//      num /= 10;
//    }
//    return digitSum(sum);
//  }
//}
//
//int main(void){
//  int T, t=1;
//  
//  scanf("%d", &T);
//  while (T--) {
//    llu large;
//    scanf("%llu", &large);
//    printf("#%d %llu\n", t++, digitSum(large));
//  }
//  
//  
//  return 0;
//}
