//#include <stdio.h>
//int find_prime_bruteforce(int number)
//{
//    int j, prime = 1;
//    for (j = 2; j < number; j++)
//    {
//        if (number % j == 0) break;
//    }
//    if (number == j) {
//        return prime;
//    };
//    return !prime;
//
//}
//
//void delegate_responsible(int i){
//    if(find_prime_bruteforce(i)){
//        printf("YES\n");
//    } else {
//        printf("NO\n");
//    }
//}
//
//void main(void)
//{
//    int n;
//    scanf("%d", &n);
//    int arr[100] = {0};
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    
//    for (int i = 1; i < n+1; i++) {
//        if(i){
//            delegate_responsible(arr[i-1]);
//        }
//    }
//}
