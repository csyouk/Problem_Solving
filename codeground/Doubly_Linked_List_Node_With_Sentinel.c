//
//  Doubly_Linked_List_Node_With_Sentinel.c
//  codeground
//
//  Created by youkchangsu on 2017. 8. 26..
//  Copyright © 2017년 youkchangsu. All rights reserved.
//

#if 0
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define ULL unsigned long long int
typedef struct _node
{
    ULL id;
    struct _node * next;
    struct _node * prev;
    int size;
} Node;

Node Head, Tail, Sentinel;

void Init(void)
{
    static int invoked = 0;
    if(!invoked) invoked = !invoked;
    Head.next = &Tail;
    Tail.prev = &Head;
    Sentinel.next = &Tail;
    Sentinel.prev = &Head;
    Sentinel.size = 0;
    
//    printf("Head next %#.8x, Tail prev %#.8x\n", Head.next, Tail.prev);
//    printf("Tail      %#.8x, Head      %#.8x\n", &Tail, &Head);
//    printf("Sentinel %#.8x, next %#.8x, prev %#.8x\n", &Sentinel, Sentinel.next, Sentinel.prev);
    printf("Init done!\n");
}
void Trigger_Sentinel(void)
{
    printf("Left nodes : %d\n", Sentinel.size);
}
Node * Create_Node(Node *p)
{
    printf("Type the node id : ");
    scanf("%llu", &p->id);
    printf("Node id is  : %llu\n", p->id);
    p->next = (Node *)0x0;
    p->prev = (Node *)0x0;
    return p;
}

void Insert(Node * node)
{
    Node * head = &Head;
    Node * tail = &Tail;
    Sentinel.size++;
    if(tail->prev == head)
    {
        node->next = tail;
        node->prev = head;
        head->next = node;
        tail->prev = node;
        return;
    }
    node->next = tail;
    node->prev = tail->prev;
    tail->prev->next = node;
    tail->prev = node;
    return;
}

void Delete(Node * target)
{
    Node * head = &Head;
    Node * tail = &Tail;
    if(head->next == tail)
    {
        printf("Nodes are depleted.\n");
        return;
    }
    while (head->next) {
        
    }
    
    Sentinel.size--;
}

void Search_All(void)
{
    Node * head = &Head;
    printf("Node ids : ");
    while (head->next) {
        if(head->next->id) printf("%llu ", head->next->id);
        head = head->next;
    }
    printf("\n");
    printf("Total nodes : %d\n", Sentinel.size);
}

int main(void)
{
    
    char sign;
    Init();
    while (1) {
        Node * p = (Node *)calloc(1, sizeof(Node));
//        printf("%p\n", p);
        Create_Node(p);
        Insert(p);
        Trigger_Sentinel();
        printf("Go ? (y/n)");
        scanf(" %c", &sign);
//        sign = getch();
        if(sign == 'n') break;
    }
    
    
    Search_All();
    
    
    
    return 0;
}







#endif
