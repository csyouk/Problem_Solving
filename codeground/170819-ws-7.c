//
//  170819-ws-7.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 19..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0

#include <stdio.h>
int N;
int scoreset[3];
typedef struct{
    unsigned char id;
    unsigned short score3_cnt;
    unsigned short score2_cnt;
    unsigned short score1_cnt;
    unsigned short total;
} STUDENT;
STUDENT student[3] = {{1,},{2,},{3,}};

int main(void)
{
    STUDENT tmp;
//    freopen("/Users/youk/workspace/scsa/codeground/codeground/170814-3.txt", "r", stdin);
    scanf("%d", &N);
    
    for (int i =0; i < N; i++) {
        scanf("%d %d %d", &scoreset[0], &scoreset[1], &scoreset[2]);
        
        for (int j =0; j < 3; j++) {
            switch (scoreset[j]) {
                case 1:
                    student[j].score1_cnt++;
                    student[j].total += 1;
                    break;
                case 2:
                    student[j].score2_cnt++;
                    student[j].total += 2;
                    break;
                case 3:
                    student[j].score3_cnt++;
                    student[j].total += 3;
                    break;
                default:
                    break;
            }
        }
    }
    
    // 점수로 sorting
    for (int i =0; i < 2; i++) {
        for (int j =i; j < 3; j++) {
            if(student[i].total < student[j].total)
            {
                tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
    }
    
    
    if(student[0].total > student[1].total){
        printf("%d %d", student[0].id, student[0].total);
        return 0;
    }
    
    
    // 3점 회수로 sorting
    for (int i =0; i < 2; i++) {
        for (int j =i; j < 3; j++) {
            if(student[i].score3_cnt < student[j].score3_cnt)
            {
                tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
    }
    
    if(student[0].score3_cnt > student[1].score3_cnt){
        printf("%d %d", student[0].id, student[0].total);
        return 0;
    }
    
    // 2점 회수로 sorting
    for (int i =0; i < 2; i++) {
        for (int j =i; j < 3; j++) {
            if(student[i].score2_cnt < student[j].score2_cnt)
            {
                tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
    }
    
    if(student[0].score2_cnt > student[1].score2_cnt ){
        printf("%d %d", student[0].id, student[0].total);
        return 0;
    }
    
    
    printf("%d %d", 0, student[0].total);
    
    return 0;
}


#endif
