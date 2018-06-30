////
////  white_.c
////  codexpert
////
////  Created by youkchangsu on 2018. 4. 8..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//
//char board[8+2][8+2];
//int cnt;
//
//int main(void){
//  
//  int row, col;
//  
//  for (row=1; row<9; row++) {
//    scanf("%s", &board[row][1]);
//  }
//  
//  for (row=1; row<9; row++) {
//    for (col=1; col<9; col++) {
//      if(row%2 == 1){
//        if((col%2 == 1) && (board[row][col] == 'F')){cnt++;}
//      }else{
//        if((col%2 == 0) && (board[row][col] == 'F')){cnt++;}
//      }
//    }
//  }
//  
//  printf("%d", cnt);
//  return 0;
//}
