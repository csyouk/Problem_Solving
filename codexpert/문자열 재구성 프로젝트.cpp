////
////  문자열 재구성 프로젝트.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 6. 24..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//char sol[30000 + 10];
//char str[30000 + 10];
//int front, rear, wp;
//
//unsigned int strLen(char *);
//void make_str(void);
//int main(void){
//  
//  int T;
//  int t=1;
//  scanf("%d", &T);
//  while (T--) {
//    scanf("%s", str);
//    rear = strLen(str) - 1;
//    make_str();
//    
//    printf("#%d %s\n", t++, sol);
//    for (register int i=0; i<30000; i++) sol[i] = 0;
//    front = wp = 0;
//  }
//  
//  return 0;
//}
//
//unsigned int strLen(char * c){
//  unsigned int len = 0;
//  while (*c++) len++;
//  return len;
//}
//
//void make_str(void){
//  if(front == rear){
//    sol[wp++] = str[front];
//    return;
//  }
//  
//  while (front != rear) {
//    if(str[front] < str[rear]){
//      sol[wp++] = str[front++];
//    }else if(str[front] > str[rear]){
//      sol[wp++] = str[rear--];
//    }else {
//      int tmpF = front;
//      int tmpR = rear;
//      sol[wp++] = str[tmpF];
//      while (1) {
//        tmpF++; tmpR--;
//        if(str[tmpF] > str[tmpR]){
//          sol[wp++] = str[tmpR--];
//          rear = tmpR;
//          break;
//        }else if(str[tmpF] < str[tmpR]){
//          sol[wp++] = str[tmpF++];
//          front = tmpF;
//          break;
//        }else {
//          sol[wp++] = str[tmpF];
//        }
//      }
//    }
//  }
//  sol[wp++] = str[front];
//}
//
//
//
//
