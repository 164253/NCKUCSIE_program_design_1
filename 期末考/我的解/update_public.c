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

int update_public(struct LinkedList* head,char target[20],int idx1,int idx2,int idx3,int idx4,int* val){
    head=find(head,target);
    if(!head)return -1;
    if(idx1<0||idx1>=10||idx2<0||idx2>=10||idx3<0||idx3>=10||idx4<0||idx4>=10)return -2;
    *val+=head->passwd_public[idx1][idx2][idx3][idx4];
    head->passwd_public[idx1][idx2][idx3][idx4]=*val-head->passwd_public[idx1][idx2][idx3][idx4];
    return 0;
}