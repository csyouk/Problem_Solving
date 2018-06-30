//
//  170819-ws-6.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//
#if 0

#include <stdio.h>

int canvas[100][100];

void fill(int x, int y)
{
    for (int i = x; i < (x+10); i++) {
        for (int j = y; j <(y+10); j++) {
            canvas[i][j] = 1;
        }
    }
}
int main(void)
{
    int N, area = 0, x, y;
    scanf("%d", &N);
    for (int i =0; i < N; i++) {
        scanf("%d %d", &x, &y);
        fill(x, y);
    }
    
    for (int i =0; i < 100; i++) {
        for (int j =0; j <100; j++) {
            if(canvas[i][j]){ area++;}
        }
    }
    
    printf("%d", area);
    
    return 0;
}


#endif
