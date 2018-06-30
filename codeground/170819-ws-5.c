//
//  170819-ws-5.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//
#if 0

#include <stdio.h>
unsigned int N, max, longest, shortest;
char seq[100001];

int main(void)
{
    freopen("/Users/youk/workspace/scsa/codeground/codeground/testset.txt", "r", stdin);
    scanf("%d", &N);
    for (int i = 0; i<N; i++) {
        scanf(" %c", &seq[i]);
    }
    
    
    for (int i =0; i < N+1; i++)
    {
        char *p = seq+i;
        longest = 1;
        shortest = 1;
        while(*p <= *(p+1) && *p != 0)
        {
            longest++;
            p++;
        }
        if(max < longest){max = longest;}
        if(max == N) break;
        if(i > N/2 && max > N/2) break;
        
        p = seq+i;
        while(*p >= *(p+1) && *(p+1) != 0)
        {
            shortest++;
            p++;
        }
        if(max < shortest){max = shortest;}
        if(max == N) break;
        if(i > N/2 && max > N/2) break;
    }
    
    printf("%d", max);
    
    return 0;
}


#endif
