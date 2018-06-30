//
//  170819-ws-9.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0

#include <stdio.h>
int cnt;
int M, P;
char monun[101][101];
char pattern[101][101];
char tmp[101][101];

int is_match(int i, int j)
{
    for (int m =0; m < P; m++) {
        for (int n=0; n < P; n++) {
            if(monun[i+m][j+n] != pattern[m][n]) {return 0;}
        }
    }
    return 1;
}

void pattern_match(void)
{

    for (int i =0 ; i < M - ( P - 1 ); i++) {
        for (int j = 0; j < M - ( P - 1 ); j++) {
            if(monun[i][j] != pattern[0][0]) continue;
            if(is_match(i,j))
            {
                cnt++;
            }
        }
    }
    
}
void rotate_pattern()
{
    for (int i =0; i < P; i++) {
        for (int j=0; j <P; j++) {
            tmp[j][(P-1)-i] = pattern[i][j];
        }
    }
    
    for (int i =0; i < P; i++) {
        for (int j=0; j <P; j++) {
            pattern[i][j] = tmp[i][j];
        }
    }
//    printf("===============\n");
//    printf("%s\n", pattern[0]);
//    printf("%s\n", pattern[1]);
//    printf("%s\n", pattern[2]);
//    printf("===============\n");
}
int main(void)
{
    
    scanf("%d", &M);
    for (int i =0; i < M; i++) {
        scanf("%s", monun[i]);
    }
    
    scanf("%d", &P);
    for (int i =0; i < P; i++) {
        scanf("%s", pattern[i]);
    }
    
    pattern_match();
    
    rotate_pattern(); // 90
    pattern_match();
    
    rotate_pattern(); // 180
    pattern_match();
    
    rotate_pattern(); // 270
    pattern_match();
    
    printf("%d", cnt);
    
    return 0;
}

#endif
