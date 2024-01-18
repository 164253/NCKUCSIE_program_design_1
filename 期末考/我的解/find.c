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

struct LinkedList* find(struct LinkedList* head,char target[20]){
    if(!head)return NULL;
    if(!strcmp(head->name,target))return head;
    return find(head->back_head,target)?find(head->back_head,target):find(head->next,target);
}