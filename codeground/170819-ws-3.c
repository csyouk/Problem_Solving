//
//  170819-ws-3.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//


#if 0

#include <stdio.h>

int main(void)
{
    int sum_obj = 0, sum_legs = 0;
    int dogs = 0, chicken = 0;
    while (1) {
        
        scanf("%d %d", &sum_obj, &sum_legs);
        if(!(sum_obj + sum_legs)) break;
        if( !( 0<= sum_obj && sum_obj <= 1000  ) )
        {
            printf("INPUT ERROR!\n");
            continue;
        }
        if( !( 0<= sum_legs && sum_legs <= 4000  ) )
        {
            printf("INPUT ERROR!\n");
            continue;
        }
        
        dogs = (sum_legs - 2*sum_obj)/2;
        chicken = (4*sum_obj - sum_legs)/2;
        
        if(dogs < 0 || chicken < 0) {
            printf("0\n");
            continue;
        }
        if(((sum_legs - 2*sum_obj) % 2)) {
            printf("0\n");
            continue;
        }
        if((4*sum_obj - sum_legs) % 2) {
            printf("0\n");
            continue;
        }
        
        printf("%d %d\n", dogs, chicken);
        
    }
    
    return 0;
}

#endif
