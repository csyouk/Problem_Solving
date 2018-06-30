////
////  암호코드 스캔.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 8..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//int T, M, N;
//
//char Table[16][5] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
//int PwdTable[10][4] = {
//  { 3, 2, 1, 1 },
//  { 2, 2, 2, 1 },
//  { 2, 1, 2, 2 },
//  { 1, 4, 1, 1 },
//  { 1, 1, 3, 2 },
//  { 1, 2, 3, 1 },
//  { 1, 1, 1, 4 },
//  { 1, 3, 1, 2 },
//  { 1, 2, 1, 3 },
//  { 3, 1, 1, 2 }
//};
//char Binary[2010];
//int RunLength[33];
//int num[9];
//int multiply;
//int toInt(char c){
//  switch (c)
//  {
//    case '0':
//    case '1':
//    case '2':
//    case '3':
//    case '4':
//    case '5':
//    case '6':
//    case '7':
//    case '8':
//    case '9':
//      return c - '0';
//    case 'A':
//    case 'B':
//    case 'C':
//    case 'D':
//    case 'E':
//    case 'F':
//      return c - 'A' + 10;
//  }
//  return -1;
//}
//
//void toBinary(char * hexStr){
//  int i;
//  for (i = 0; i < M; i++){
//    strcpy(Binary + i*4, Table[toInt(hexStr[i])]);
//  }
//  Binary[4 * i] = 0;
//}
//
//void init(){
//  memset(Binary, 0, sizeof(char[2010]));
//  memset(RunLength, 0, sizeof(int[33]));
//  for (int i=0; i<9; i++) {
//    num[i] = -1;
//  }
//  scanf("%d %d", &N, &M);
//  char str[501];
//  bool flag = false;
//  for (int i = 0; i < N; i++){
//    scanf("%s", str);
//    if (!flag){
//      for (int j = 0; j < M; j++){
//        if (str[j] != '0'){
//          flag = true;
//          break;
//        }
//      }
//      if(flag)
//        toBinary(str);
//    }
//  }
//}
//
//void runLengthEncode(){
//  int idx = 0;
//  int i = 0;
//  while (Binary[i])
//  {
//    if (Binary[i] == Binary[i + 1]){
//      RunLength[idx]++;
//    }
//    else{
//      RunLength[idx]++;
//      idx++;
//    }
//    i++;
//  }
//}
//
//void findNum(){
//  int idx = 1;
//  int i, j, k;
//  multiply = 1;
//  for (i = 1; i <31;){
//    if (i == 1){
//      for (j = 0; j < 10; j++){
//        for (k = 1; k < 4; k++){
//          if (RunLength[i + k] % PwdTable[j][k])
//            break;
//        }
//        if (k == 4){
//          multiply = RunLength[i + k] / PwdTable[j][k];
//          num[idx++] = j;
//          break;
//        }
//      }
//      i = 4;
//    }else{
//      for (j = 0; j < 10; j++){
//        for (k = 0; k < 4; k++){
//          if (RunLength[i + k] % PwdTable[j][k])
//            break;
//        }
//        if (k == 4){
////          multiply = RunLength[i + k] / PwdTable[j][k];
//          num[idx++] = j;
//          break;
//        }
//      }
//      i += 4;
//    }
//  }
//}
//
//int result(){
//  int odd, even;
//  odd = even = 0;
//  for (int i = 1; i <=8; i++){
//    if (i % 2){ odd += num[i]*3; }
//    else{ even += num[i]; }
//  }
//  if (((odd + even) % 10) == 0){
//    int sum = 0;
//    for (int i = 1; i <= 8; i++)
//      sum += num[i];
//    return sum;
//  }
//  return 0;
//}
//
//int main(void){
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  scanf("%d", &T);
//  for (int t = 1; t <=T ; t++)
//  {
//    printf("#%d ", t);
//    init();
//    runLengthEncode(); // 짝수에는 0이 홀수에는 1의 연속된 갯수가 들어가 있음.
//    findNum();
//    printf("%d\n", result());
//  }
//  
//  
//  return 0;
//}
