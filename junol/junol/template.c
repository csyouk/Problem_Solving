//문자열1
//#include <stdio.h>
//void main(void)
//{
//    int i;
//    while (1) {
//        printf("ASCII code =? ");
//        scanf(" %d", &i);
//        if (i < 33 || i > 127) {
//            break;
//        }
//        printf("%c\n",i);
//    }
//}

//
//#include <stdio.h>
//void main(void)
//{
//    char arr[101] = {0};
//    scanf("%s", arr);
//    
//    for (int j=0; j<2; j++) {
//        for (int i = 0; i < 101; i++) {
//            if (arr[i]) {
//                printf("%c", arr[i]);
//            }
//            
////            printf("%d ", i);
//        }
//    }
//}

//
//
//#include <stdio.h>
//void main(void)
//{
//    char hello[21] = "Hong Gil Dong";
//    for (int i = 3; i < 7; i++) {
//        printf("%c", hello[i]);
//    }
//}



//
//#include <stdio.h>
//
//void main(void)
//{
//    char a[101] = {0};
//    int index, rep = 0;
//    
//    
//    for (;;) {
//        scanf("%c",&a[rep]);
//        if(a[rep] == ' ') break;
//        rep++;
//    }
//
//    scanf("%d",&index);
//    
////    printf("%d %d", index, rep);
//    
//    rep--;
//    
//    for (int i = rep; (index != 0 && i >= 0); i--) {
//        printf("%c", a[i]);
//        index--;
////        printf("index %d / i %d\n", index, i);
//    }
//}

//
//
//#include <stdio.h>
//
//void main(void)
//{
//    char a[21], b[21];
//    int la = 0, lb = 0;
//
//    scanf("%s", a);
//    scanf("%s", b);
//    
//    while (1) {
//        if(a[la] != '\0'){
////            printf("%c ", a[la]);
//            la++;
//        }else{
//            break;
//        }
//    }
//
//    while (1) {
//        if(b[lb] != '\0'){
////            printf("%c ", b[lb]);
//            lb++;
//        }else{
//            break;
//        }
//    }
//    
//    printf("%d", la + lb);
//
//}


//
//
//#include <stdio.h>
//
//void main(void)
//{
//    char c;
//    
//    while(1){
//        scanf(" %c", &c);
//        if('A' <= c && c <= 'Z'){
//            printf("%c\n", c);
//            continue;
//        }
//        if('a' <= c && c <= 'z'){
//            printf("%c\n", c);
//            continue;
//        }
//        if('0' <= c && c <= '9'){
//            printf("%d\n", c);
//            continue;
//        }
//        break;
//    }
//}
//
//
//


