//
//  K번째_접미어.c
//  codexpert
//
//  Created by youkchangsu on 2018. 5. 1..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define SIZE 500
//
//char * prefixes[SIZE];
//
//unsigned long len;
//
//void sort(){
//  char * tmp;
//  for (int i=0; i<len-1; i++) {
//    for (int j=i+1; j<len; j++) {
//      if(strcmp(prefixes[i], prefixes[j]) > 0){
//        tmp = prefixes[j];
//        prefixes[j] = prefixes[i];
//        prefixes[i] = tmp;
//      }
//    }
//  }
//}
//
//
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  
//  int TC;
//  unsigned int ptr;
//  int order;
//  int t=0;
//  char str[SIZE];
//  scanf("%d", &TC);
//  
//  while (t++ != TC) {
//    scanf("%d", &order);
//    memset(prefixes, 0, sizeof(char * [SIZE]));
//    scanf("%s", str);
//    
//    len = strlen(str);
//    for (ptr=0; ptr<len; ptr++) {
//      prefixes[ptr] = (char *)malloc(len+1);
//      strcpy(prefixes[ptr], str + ptr);
//    }
//    
//    sort();
//    
//    if(prefixes[order-1] != 0)
//      printf("#%d %s\n", t, prefixes[order-1]);
//    else
//      printf("#%d %s\n", t, "none");
//    
//    for (ptr=0; ptr<len; ptr++)
//      free(prefixes[ptr]);
//    
//    
//  }
//  
//  
//  return 0;
//}
