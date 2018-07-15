//
//  pizzaParty2.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 5..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//
//typedef unsigned long long llu;
//llu a[100],b[100];
//void make_table();
//
//int main(void){
//  
//  int T, t=1;
//  scanf("%d", &T);
//  
//  make_table();
//  
//  while (T--) {
//    int k;
//    scanf("%d", &k);
//    printf("#%d %llu %llu\n", t++, a[k],b[k]);
//  }
//  return 0;
//}
//
//
//void make_table(){
//  a[1]=2; b[1] =1;
//  a[2]=3; b[2] =2;
//  a[3]=5; b[3] =3;
//  
//  for (int i=4; i<91; i++) {
//    b[i] = a[i-1]; a[i] = b[i] + b[i-1];
//  }
//}
