//
//  170819-ws.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0

#include <stdio.h>
int main(void)
{
    int r, c, pos;
    int val = 1;
    int loop = 0;
    int row =1, col =1;
    scanf("%d %d", &r, &c);
    scanf("%d", &pos);
    
    if(pos > r*c || pos < 1) {printf("0"); return 0;}
    
    
    do {
        for (; col < (c+1) - loop; col++) {
            if (val == pos) {
                printf("%d %d", row, col);
                return 0;
            }
            val++;
        }
        col--;
        row++;
        
        
        for (; row < (r+1)-loop ; row++) {
            if (val == pos) {
                printf("%d %d", row, col);
                return 0;
            }
            val++;
        }
        col--; row--;
        
        for (; col >=1+loop; col--) {
            if (val == pos) {
                printf("%d %d", row, col);
                return 0;
            }
            val++;
        }
        col++; row--;
        
        for (; row > 1 + loop; row--) {
            if (val == pos) {
                printf("%d %d", row, col);
                return 0;
            }
            val++;
        }
        
        col++; row++;
        
        loop++;
        
        
    } while (val != r*c);
    
    
    
    
    printf("%d %d", row, col);
    
    
    return 0;
}

#endif
