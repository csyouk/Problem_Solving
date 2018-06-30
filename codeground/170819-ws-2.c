//
//  170819-weekend-ws-2.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//
#include <assert.h>
#if 0

#include <stdio.h>
#define ULL unsigned long long int
int N;
int Raw_Data[14];
int leftOp[7];
int rightOp[7];
void sort_decending()
{
    int tmp;
    for (int i =0; i < 13; i++) {
        for (int j =i; j < 14; j++) {
            if(Raw_Data[i] < Raw_Data[j])
            {
                tmp = Raw_Data[i];
                Raw_Data[i] = Raw_Data[j];
                Raw_Data[j]= tmp;
            }
        }
    }
}
int conv_arr_to_int(int iter_cnt, int *p)
{
    int r = 0, w = 1;
    while(iter_cnt)
    {
        r += (*p)*w;
        iter_cnt--; w *= 10;
        p--;
    }
    return r;
}
int main(void)
{
    int left_digit_cnt = 0;
    int right_digit_cnt = 0;
    int total_digit_cnt = 0;
    ULL leftOpVal = 0;
    ULL rightOpVal = 0;
    ULL result = 0;
    ULL tmp = 0;
    scanf("%d", &N);
    for (int i =0; i < N; i++) {
        scanf("%d", &Raw_Data[i]);
    }
    
    sort_decending();
    
    for (int i = 0; i < N; i += 4) {
        
        leftOp[i/2] = Raw_Data[i+0];
        left_digit_cnt++; total_digit_cnt++;
        if(total_digit_cnt == N) break;
        
        rightOp[i/2] = Raw_Data[i+1];
        right_digit_cnt++; total_digit_cnt++;
        if(total_digit_cnt == N) break;
        
        rightOp[i/2+1] = Raw_Data[i+2];
        right_digit_cnt++; total_digit_cnt++;
        if(total_digit_cnt == N) break;
        
        leftOp[i/2+1] = Raw_Data[i+3];
        left_digit_cnt++; total_digit_cnt++;
        if(total_digit_cnt == N) break;
    }
    
    leftOpVal = conv_arr_to_int(left_digit_cnt, &leftOp[0] + (left_digit_cnt - 1));
    rightOpVal = conv_arr_to_int(right_digit_cnt, &rightOp[0] + (right_digit_cnt - 1));
    
    result = leftOpVal * rightOpVal;
    
    tmp = leftOp[left_digit_cnt - 1];
    leftOp[left_digit_cnt - 1] = rightOp[right_digit_cnt - 1];
    rightOp[right_digit_cnt - 1] = tmp;
    
    
    leftOpVal = conv_arr_to_int(left_digit_cnt, &leftOp[0] + (left_digit_cnt - 1));
    rightOpVal = conv_arr_to_int(right_digit_cnt, &rightOp[0] + (right_digit_cnt - 1));

    tmp = leftOpVal * rightOpVal;
    
    printf("%llu %llu\n", result, tmp);
    if(tmp > result)
    {
        result = tmp;
    }
    
    
//    printf("%llu", result);
//    assert(99994730031602 == result);
    
}


#endif






