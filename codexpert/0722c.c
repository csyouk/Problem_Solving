//
//
////
////
////#include <stdio.h>
//////1~4
////#if 0
//////1
////int odd_cnt(int n){
////    int i,cnt = 0;
////    for (i = 1; i <= n; i++){//i=0;i<n안됨
////        if ((i % 2) != 0) cnt++;
////    }
////    return cnt;
////}
//////2
////int odd_sum(int n){
////    int i, sum = 0;
////    for (i = 1; i <= n; i++){
////        if ((i % 2) != 0) sum = sum + i;
////    }
////    return sum;
////}
//////3
////void odd_print(int n){
////    int i;
////    for (i = n; i > 0; i--){
////        if ((i % 2) != 0) printf("%d ", i);
////    }
////    printf("\n");
////}
//////4
////void cnt3_5(int n){
////    int i, cnt = 0;
////    for (i = 1; i <= n; i++){
////        if (((i % 15) == 0)) {
////            printf("%d ", i);
////            cnt++;
////        }
////    }
////    printf("\n%d\n", cnt);
////    
////}
////int main(void){
////    int n;
////    scanf("%d", &n);
////    //printf("%d\n", odd_cnt(n));
////    //printf("%d\n", odd_sum(n));
////    //odd_print(n);
////    cnt3_5(n);
////}
////#endif
//////5
////#if 0
////int main(void){
////    int i, cnt=0;
////    for (i = 1; i < 100; i = i + 2){
////        printf("%2d ", i);
////        cnt++;
////        if (cnt%15==0){ printf("\n"); }
////    }
////    printf("\n");
////}
////#endif
//////6~8
////#if 0
//////6
////void left(int n){
////    int i,j;
////    for(i = 0; i < n; i++){
////        for (j = 1; j < i+2; j++)
////        {printf("%d", j);}
////        printf("\n");
////    }
////    printf("\n");
////}
//////7
////void right(int n){
////    int i, j;
////    for (i = 0; i < n; i++){
////        for (j = 1; j < n - i; j++)
////        {
////            printf(" ");
////        }
////        for (j = 1; j < i + 2; j++)
////        {
////            printf("%d", j);
////        }
////        printf("\n");
////    }
////    printf("\n");
////}
//////8
////void left_alpha(char x){
////    char i, j;
////    for (i = 'A'; i < x; i++){
////        for (j = 'A'; j < i + 2; j++)
////        {
////            printf("%c", j);
////        }
////        printf("\n");
////    }
////    printf("\n");
////}
////
////int main(void){
////    int n;
////    char x;
////    scanf("%d %c", &n,&x);
////    left(n);
////    right(n);
////    left_alpha(x);
////}
////#endif
//////9 //10
////#if 0
////int main(void){
////    int i, j;
////    for (i = 1; i < 10; i++){
////        for (j = 2; j < 10; j++){
////            printf(" %d* %d=%2d",j,i,i*j);
////        }
////        printf("\n");
////    }
////    printf("\n");
////    int a, b;
////    for (a = 1; a < 7; a++){
////        for (b = 1; b < 7; b++){
////            printf("%d %d\n",a,b);
////        }
////    }
////    printf("\n");
////}
////#endif
//////11
////#if 0
////int last_int(int n){
////    int i=0,sum=0;
////    while (sum < n ){
////        sum = sum + i;
////        i++;
////    }
////    return i-1;
////}
////int main(void){
////    int n;
////    scanf("%d", &n);
////    printf("%d\n",last_int(n));
////}
////#endif
//////12
////#if 0
////void Num_Reverse(int num)
////{
////    int i = 0;
////    while (num)
////    {
////        printf("%d", num % 10);
////        num /= 10;
////    }
////}
////void main(void)
////{
////    int n;
////    scanf("%d", &n);
////    Num_Reverse(n);
////}
////#endif
////
//////주말 workshop 1
////#if 0
////int main(void){
////    int a, b,i,sum=0;
////    scanf("%d %d", &a, &b);
////    for ( i = a; i < b+1; i++)
////    {
////        if (i % 2 == 0){ sum = sum + i; }
////    }
////    printf("%d\n", sum);
////}
////#endif
//////2
////#if 0
////int main(void){
////    int i;
////    for (i = 1; i < 101; i++){
////        printf(" %3d", i);
////        if (i % 10 == 0){ printf("\n"); }
////    }
////}
////#endif
//////3
////#if 0
////int main(void){
////    int i;
////    char x;
////    for (i = 0; i < 26; i++){
////        for (x = 'A'+i; x < 'Z'+1; x++){
////            printf("%c", x);
////        }
////        for (x = 'A' ; x < 'A' + i; x++){
////            printf("%c", x);
////        }
////        printf("\n");
////    }
////}
////#endif
//////4
////#if 0
////int main(void){
////    int i,j,k;
////    for (i = 1; i < 7; i++){
////        for (j = 1; j < 7; j++){
////            for (k = 1; k < 7; k++)
////            {
////                printf("%d %d %d\n",i,j,k);
////            }
////        }
////    }
////}
////#endif
//////5
////#if 0
////int main(void){
////    int n,sum=0;
////    scanf("%d", &n);
////    while(n!=0){
////        sum = sum + n % 10;
////        n = n / 10;
////    }
////    printf("%d\n", sum);
////}
////#endif
//////6
////#if 1
////void left(int a){
////    int i, j;
////    for (i = 0; i < a; i++){
////        for (j = 0; j < i+1; j++){
////            printf("*");
////        }
////        printf("\n");
////    }
////    printf("\n");
////}
////void right(int a){
////    int i, j;
////    for (i = 0; i < a; i++){
////        for (j = 1; j < a-i; j++){
////            printf(" ");
////        }
////        for (j = 0; j < i + 1; j++){
////            printf("*");
////        }
////        printf("\n");
////    }
////    printf("\n");
////}
////void right_dowm(int a){
////    int i, j;
////    for (i = 0; i < a; i++){
////        for (j = 1; j < i + 1; j++){
////            printf(" ");
////        }
////        for (j = 0; j < a - i; j++){
////            printf("*");
////        }
////        printf("\n");
////    }
////}
////
////int main(void){
////    int a = 5;
////    
////    left(5);
////    right(5);
////    right_dowm(5);
////}
////#endif
//////7
////#if 0
////int main(void){
////    int i=0,sum=0;
////    while(sum<1000) {
////        i += 3;
////        sum = sum + i;
////    }
////    printf("%d\n", i-3);
////}
////#endif
//////8
////#if 0
////int main(void){
////    int n,i,j,sum=0,sub_sum=1;
////    scanf("%d", &n);
////    for (i = 1; i < n + 1; i++){
////        sub_sum = sub_sum*i;
////        sum = sum+sub_sum;
////    }
////    printf("%d\n", sum);
////}
////#endif
//////9
////#if 0
////int main(void){
////    int a;
////    scanf("%d", &a);
////    rand()%1000000 +1
////}
////#endif
//////10
////#if 0
////#include <stdio.h>
////int main(void){
////    int n,i,j;
////    scanf("%d", &n);
////    for (i = 2; i < n + 1;i++){
////        for (j = 1; j < i+1; j++){
////            if (i%j == 0){ printf("%d ", j); }
////        }
////        printf("\n");
////    }
////}
////#endif
//////11
////#if 0
////int jin(int n, int m)
////{
////    int i, j, cnt = 0;
////    for (i = n; i < m + 1; i++){
////        for (j = 1; j < i/2 + 1; j++){
////            if (i%j == 0){
////                cnt += j;
////            }
////        }
////    }
////}
////int main(void){
////    int n,m,i,j,sum=0;
////    scanf("%d %d", &n, &m);
////    for (i = n; i < m + 1; i++){
////        sum = 0;
////        for (j = 1; j < i; j++){
////            if (i%j == 0){
////                sum = sum + j; 
////            }
////        }
////        
////        if (i == sum){ printf("%d\n", i);}
////    }
////}
////#endif
//////12
////#if 0
//int calender(int year,int mon,int d){
//    int m,day,sum_day=0;
//    if ((year % 4 != 0) || (year % 100 == 0)){
//        for (m = 1; m < mon; m++){
//            switch (m){
//                case 1:
//                case 3:
//                case 5:
//                case 7:
//                case 8:
//                case 10:
//                case 12: day = 31; break;
//                case 4:
//                case 6:
//                case 9:
//                case 11: day = 30; break;
//                case 2: day = 28; break;
//            }
//            sum_day = sum_day + day;
//        }
//    }
//    else{
//        for (m = 1; m < mon; m++){
//            switch (m){
//                case 1:
//                case 3:
//                case 5:
//                case 7:
//                case 8:
//                case 10:
//                case 12: day = 31; break;
//                case 4:
//                case 6:
//                case 9:
//                case 11: day = 30; break;
//                case 2: day = 29; break;
//            }
//            sum_day = sum_day + day;
//        }
//    }
//    return sum_day+d;
//}
//int main(void){
//    int year, mon, d;
//    scanf("%d %d %d", &year, &mon, &d);
//    printf("%d\n", calender(year, mon, d));
//}
////#endif
