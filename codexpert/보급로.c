//
//  보급로.c
//  codexpert
//
//  Created by youkchangsu on 2018. 4. 30..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//
//
//#include <stdio.h>
//#include <string.h>
//#define SIZE 100
//#define INF 0xffffffff
//typedef struct {
//  int r, c;
//} Road;
//Road Q[SIZE * SIZE*SIZE];
//int map[SIZE][SIZE];
//int DT[SIZE][SIZE];
//
//int dr[4] = {0,-1,0,1};
//int dc[4] = {-1,0,1,0};
//int size;
//
//void bfs(int _r, int _c){
//  
//  Road tmp, cur;
//  int RP,WP;
//  RP = WP = 0;
//  
//  tmp.r = _r; tmp.c = _c;
//  Q[WP++] = tmp;
//  
//  while (RP < WP) {
//    register int r,c;
//    cur = Q[RP++];
//    for (register int i=0; i<4; i++) {
//      
//      r = cur.r + dr[i]; c = cur.c + dc[i];
//      
//      if(r < 0 || c < 0 || r > size -1 || c > size - 1) continue;
//      
//      if(DT[r][c] == INF){
//        DT[r][c] = DT[cur.r][cur.c] + map[r][c];
//        tmp.r = r; tmp.c = c;
//        Q[WP++] = tmp;
//      }else if(DT[r][c] > DT[cur.r][cur.c] + map[r][c]){
//        DT[r][c] = DT[cur.r][cur.c] + map[r][c];
//        tmp.r = r; tmp.c = c;
//        Q[WP++] = tmp;
//      }
//    }
//  }
//}
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  
//  int TC;
//  scanf("%d", &TC);
//  for (int t=1; t<=TC; ++t) {
//    scanf("%d", &size);
//    memset(DT, 1, sizeof(int[SIZE][SIZE]));
//    for (int i = 0; i<size; ++i) {
//      for (int j=0; j<size; ++j) {
//        scanf("%1d", &map[i][j]);
//      }
//    }
//    DT[0][0] = map[0][0];
//    bfs(0,0);
//    printf("#%d %d\n", t, DT[size-1][size-1]);
//  }
//  
//  return 0;
//}
