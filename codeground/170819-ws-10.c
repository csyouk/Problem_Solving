//
//  170819-ws-10.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 20..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//
#include <assert.h>

#if 0
#include <stdio.h>
#define ULL unsigned long long int
#define ABS(x) (((x) > 0)? (x) : -(x))

int N, lVal, rVal;
ULL result;
int seq[14];
int leftOp[7];
int rightOp[7];
void sort_decending()
{
    int tmp;
    for (int i =0; i < 13; i++) {
        for (int j =i; j < 14; j++) {
            if(seq[i] < seq[j])
            {
                tmp = seq[i];
                seq[i] = seq[j];
                seq[j]= tmp;
            }
        }
    }
}
ULL getRVal(){
    ULL r =0, m=1;
    for (int i = 6; i >= 0; i--) {
        r += rightOp[i]*m;
        m *=10;
    }
    return r;
}
ULL getLVal(){
    ULL r =0, m=1;
    for (int i = 6; i >= 0; i--) {
        r += leftOp[i]*m;
        m *=10;
    }
    return r;
}
ULL power(int b, int e)
{
    ULL r =1;
    while (e--) {
        r *=b;
    }
    return r;
}
int main(void)
{
    scanf("%d", &N);
    for (int i =0; i < N; i++) {
        scanf("%d", &seq[i]);
    }
    
    sort_decending();
    for (int i =0; i < 14; i+=2) {
        ULL tmp = 0;
        if(seq[i] == seq[i+1]){
            leftOp[i/2] = seq[i];
            rightOp[i/2] = seq[i+1];
        }
        leftOp[i/2] = seq[i];
        rightOp[i/2] = seq[i+1];
        tmp = ABS(getLVal() - getRVal());
        
        leftOp[i/2] = seq[i+1];
        rightOp[i/2] = seq[i];
        if(ABS(getLVal() - getRVal()) > tmp) {
            leftOp[i/2] = seq[i];
            rightOp[i/2] = seq[i+1];
        }
    }
    ULL r = getRVal();
    ULL l = getLVal();
    result = getLVal() * getRVal() / power(10, (14-N));
    
    printf("%llu", result);
    
    return 0;
}

#endif
