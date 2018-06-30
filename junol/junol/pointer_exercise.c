////
////  pointer_exercise.c
////  junol
////
////  Created by youkchangsu on 2017. 7. 23..
////  Copyright © 2017년 youkchangsu. All rights reserved.
////
//
//// 354p
////#include <stdio.h>
////void main(void){
////    int a = 10;
////    int *p;
////    p = &a;
////    printf("a = %d, &a = %d\n", a, &a );
////    printf("*p = %d, p = %d\n", *p, p);
////}
//
////pointer 1
////#include <stdio.h>
////void main(void){
////    int a;
////    int *p;
////    p = &a;
////    scanf("%d", &a);
////    
////    printf("%#x %d", p, *p);
////}
//
////pointer 2
////#include <stdio.h>
////void main(void){
////    int a;
////    int *p=&a;
////    
////    scanf("%d", p);
//////    printf("a = %d\n",a);
////    
////    printf("%d...%d", *p/10 , *p%10);
////}
//
////p3
////#include <stdio.h>
////void main(void){
////    int a,b;
////    int *p1=&a, *p2=&b;
////    
////    scanf("%d%d", p1, p2);
////    
////    printf("%d %c %d = %d\n", *p1, '+', *p2, *p1 + *p2);
////    printf("%d %c %d = %d\n", *p1, '-', *p2, *p1 - *p2);
////    printf("%d %c %d = %d\n", *p1, '*', *p2, *p1 * *p2);
////    printf("%d %c %d = %d\n", *p1, '/', *p2, *p1 / *p2);
////}
//
//
////p4
//#include <stdio.h>
//void main(void){
////    int nums[5];
////    int *p = &nums;
////    
////    for (int i =0; i < 5; i++) {
////        scanf("%d", p + i);
////    }
////    
////    for (int i=0; i < 5; i++) {
////        if(!(i%2)){
////            printf("%d ", p[i]);
////        }
////    }
//    
////    printf("size of int : %d\n", sizeof(int));
//    char *pa;
//    int *pb;
//    double *pc;
//    
//    int a = 0;
//    pb = &a;
//    
//    printf("%d %d\n", 0, *pb); // 0 0 출력
//    printf("===========\n");
//    *pb = 3;
//    printf("%d %d\n", a, *pb); // 3 3 출력
//    printf("===========\n");
//    sizeof(pb); // 포인터 변수이므로 8 바이트
//    sizeof(*pb); // int형으로 접근하였으므로 4바이트
//    pb[0] = 3;
//    pb[1] = 4;
//    printf("%d %d\n", a, pb[0]); // 3 3 출력 -- 포인터는 배열처럼 접근이 가능하다.
//    printf("%d %d\n", a, pb[1]); // 3 4 출력
//    printf("%d %d\n", a, pb[2]); // 3 3 출력 ==> pb[2]값은 지정한 값이 아니라, 메모리에 이미 저장되어 있던 값이다.
//    printf("%d %d\n", a, pb[3]); // 3 3 출력
//    printf("%d %d\n", a, pb[4]); // 3 3 출력
//    printf("%d %d\n", a, pb[5]); // 3 3 출력
//}
//
//
//
//
//
//
//
