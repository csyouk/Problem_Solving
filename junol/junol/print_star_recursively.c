//
//  print_star_recursively.c
//  junol
//
//  Created by youkchangsu on 2017. 7. 26..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

// input : 3
// *
// **
// ***
// **
// *


#include <stdio.h>

//int peak;
//
//void star(int total_row){
//    if (total_row == peak) {
//        
//    }
//}
//
//int main(void){
//    int last;
////    scanf("%d",&peak);
//    
//    peak = 3;
//    last = 2*peak -1;
//    
//    star(last);
//}

//void main(){
//    
//    int peak = 3;
//    for (int i = 0; i < 5; i++) {
//        if (i < peak) {
//            for (int j = 0; j < i+1; j++) {
//                printf("*");
//            }
//        } else {
//            for (int j = 5 - i; j <= i-1; j++) {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//}


//void draw(int peak, int last){
//    
//    if (last == 0) return;
//    if (last < peak) {
//        for (int i = 0; i < last; i++) {
//            printf("*");
//        }
//        printf("\n");
//        draw(peak, last -1);
//    } else {
//        // last 5 4 3
//        // star 1 2 3
//        for (int i = 2*peak ; i > last; i--) {
//            printf("*");
//        }
//        printf("\n");
//
//        draw(peak, last - 1);
//    }
//}

void draw(int, int);
void star(int, int);

void main(){
    int n;
    scanf("%d", &n);
    draw(n, 2*n - 1);
}


void draw(int peak, int last){
    
    if(last == peak) {
        star(peak, last);
        return;
    }
    
    star(peak, last);
    draw(peak, last - 1);
    star(peak, last);
}

void star(int peak, int last){
    for (int i = 2*peak ; i > last; i--) {
        printf("*");
    }
    printf("\n");
}



