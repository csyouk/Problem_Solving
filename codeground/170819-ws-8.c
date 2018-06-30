//
//  170819-ws-8.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0


#include <stdio.h>
//int testcase;
//char pattern[100001];
//char text[100001];
//
//
//int main(void)
//{
//    unsigned char detected;
//    scanf("%d", &testcase);
//    
//    for (int i =0 ; i < testcase; i++) {
//        char *p_p = pattern;
//        char *p_t = text;
//        detected = 0;
//        scanf("%s", pattern);
//        scanf("%s", text);
//        
//        
//        while(*p_p){
//            p_t = text;
//            while (*p_t) {
//                if(*p_p == *p_t)
//                {
//                    detected = ~detected;
//                    break;
//                }
//                p_t++;
//            }
//            p_p++;
//            if(detected) break;
//        }
//        printf("%s\n", (detected)? "YES":"NO");
//    }
//    return 0;
//}


//int letterBits(const string &s) {
//    int bits = 0;
//    for (char ch : s)
//        bits |= 1 << (ch - 'a');
//    return bits;
//}
//
//int main() {
//    int testCases;
//    cin >> testCases;
//    while (testCases--) {
//        string strA, strB;
//        cin >> strA >> strB;
//        int bitsA = letterBits(strA);
//        int bitsB = letterBits(strB);
//        cout << (bitsA & bitsB ? "YES": "NO") << endl;
//    }
//    return 0;
//}

#include <stdio.h>
char pattern[100001];
char text[100001];

int letterBits(const char *p)
{
    int t =0;
    while(*p){
        t |= 1 << (*p - 'a');
        p++;
    }
    return t;
}

int main(void)
{
    int testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        scanf("%s", pattern);
        scanf("%s", text);
        int bitP = letterBits(pattern);
        int bitT = letterBits(text);
        printf("%s", (bitP & bitT)? "YES\n":"NO\n");
    }
    return 0;
}
#endif







