//
//  main.c
//  FunctionPointer
//
//  Created by youkchangsu on 2017. 8. 2..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#include <stdio.h>

#define p printf

int (*FuncPt) (int, int);
int add(int, int);
int mul(int a, int b);

typedef int (*MYFNPOINT)(int, int);
MYFNPOINT w;

typedef struct {
    int x;
    int (*f)(int, int);
    MYFNPOINT mul;
} THING ;

THING t = {3, add, mul};

int main(int argc, const char * argv[]) {
    
    FuncPt = add;
    
    p("%d\n", FuncPt(2,3));
    p("%d\n", (*FuncPt)(3,4));
    
    p("%d\n", t.mul(10,20));
    
    return 0;
}


int add(int a, int b){
    return a+b;
}

int mul(int a, int b){
    return a*b;
}

