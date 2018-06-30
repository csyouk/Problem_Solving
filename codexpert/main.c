//#include <stdio.h>
//int no_of_proper_divisor(int i)
//{
//    int cnt = 0;
//    for (int j = 1; j < i/2 +2; j++) {
//        if(i%j == 0) {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//void main(void) {
//
//
//    int n,m, flag,  smallest_int = -1, no_of_divisors=1, biggest_div_no = 1;
//    scanf("%d%d",&n,&m);
//    
//    for (int i = n; i < m+ 1; i++) {
//        no_of_divisors = no_of_proper_divisor(i);
//        if(no_of_divisors > biggest_div_no){
//            biggest_div_no = no_of_divisors;
//            smallest_int = i;
//        }
//    }
//    printf("%d \n", smallest_int);
//}
