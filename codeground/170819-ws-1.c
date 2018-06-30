//
//  170819-weekend-ws-1.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0

#include <stdio.h>
#include <assert.h>

#define UL unsigned int
#define ULL unsigned long long int
char operand[];
//char sol[];

ULL str_to_int(ULL iter_cnt, char *p)
{
    ULL total = 0;
    ULL weight = 1;
    
    while(iter_cnt)
    {
        total += (*p - '0') * weight;
        weight *= 10;
        p--;
        iter_cnt--;
    }
    
    return total;
}
ULL str_length(char *p)
{
    int length = 0;
    while(*p) { length++; p++;}
    return length;
}

int main(void)
{
    
    ULL sol;
    
    
    scanf("%s %llu", operand, &sol);
    
    ULL operand_len = str_length(operand);
    for (ULL operator_pos = 1; operator_pos < operand_len; operator_pos++) {
        ULL total = 0;
        
        char *p = &operand[0];
        
        ULL leftOp = str_to_int(operator_pos, p + (operator_pos-1));
        
        ULL rightOp = str_to_int(operand_len - operator_pos, p + (operand_len - 1));
        
        total = leftOp + rightOp;
        
        if(total == sol) {printf("%llu+%llu=%llu", leftOp, rightOp, total); return 0;}
    }
    
    printf("NONE");

    
    
    return 0;
}
#endif






