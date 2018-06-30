//#include <stdio.h>
//#define MAXN 2000
//#define MAXM 500
//#define TO_INT(X) ((X) > '9' ? (X) - 'A' + 10 : (X) - '0')
//#define MIN(X,Y) ((X) > (Y) ? (Y) : (X))
//int N, M, ans;
//char raw[MAXN][MAXM + 1];
//int password[5][5][5];
//
//void initCode(void)
//{
//  password[2][1][1] = 0;
//  password[2][2][1] = 1;
//  password[1][2][2] = 2;
//  password[4][1][1] = 3;
//  password[1][3][2] = 4;
//  password[2][3][1] = 5;
//  password[1][1][4] = 6;
//  password[3][1][2] = 7;
//  password[2][1][3] = 8;
//  password[1][1][2] = 9;
//}
//
//void checkCode()
//{
//  char ch, num[8];
//  for (int i = 0; i < N; i++){
//    for (int j = M - 1; j >= 0; j--){
//      // hex to decimal
//      ch = TO_INT(raw[i][j]);
//      
////      if (ch && raw[i-1][j] == '0')
//      if(!ch || raw[i-1][j] != '0')
//        continue;
//      
//      int codecnt = 0, bitcnt = 0;
//      while (codecnt < 8){
//        int cnt[5] = { 0, };
//        for (int k = 4; k >= 1; k--)
//        {
//          while ((ch & 1) == (k & 1))
//          {
//            ch = ch >> 1;
//            cnt[k]++; bitcnt++;
//            
//            if (bitcnt == 4){
//              j--;
//              ch = TO_INT(raw[i][j]);
//              bitcnt = 0;
//            }
//          }
//        }
//        
//        int min = MIN(cnt[1], cnt[2]);
//        min = MIN(min, cnt[3]);
//        num[codecnt++] = password[cnt[1] / min][cnt[2] / min][cnt[3] / min];
//      }
//      
//      int sum = 0;
//      for (int i=0; i<8; i++) {
//        if(i%2)
//          sum += 3* num[i];
//        else
//          sum += num[i];
//      }
//      
//      if (sum % 10 == 0)
//        for (int i=0; i<8; i++)
//          ans += num[i];
//        
//      
//    }
//  }
//}
//int main(void)
//{
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  
//  initCode();
//  
//  setbuf(stdout, NULL);
//  
//  int T;
//  scanf("%d", &T);
//  
//  for (int tc = 1; tc <= T; tc++){
//    
//    scanf("%d%d", &N, &M);
//    
//    for (int i = 0; i < N; i++)
//      scanf(" %s", raw[i]);
//    
//    ans = 0;
//    checkCode();
//    printf("#%d %d\n", tc, ans);
//  }
//  return 0;
//}
