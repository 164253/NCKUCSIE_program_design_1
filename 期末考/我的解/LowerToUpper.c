#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct LinkedList;

struct LinkedList{
    char name[20];
    int passwd_public[10][10][10][10];
    int*** passwd_private;
    struct LinkedList* back_head;
    struct LinkedList* next;
};

int LowerToUpper(struct LinkedList* head,char target[20]){
    head=find(head,target);
    if(!head)return -1;
    for(int i=0;i<20;++i)head->name[i]&=223;
    return 0;
}