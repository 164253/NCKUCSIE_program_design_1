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

int update_private(struct LinkedList* head,char target[20],int idx1,int idx2,int idx3,int val){
    head=find(head,target);
    if(!head)return -1;
    head->passwd_private[idx1][idx2][idx3]=val;
    return 0;
}