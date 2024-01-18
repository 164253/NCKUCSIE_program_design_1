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

int insert(struct LinkedList* head,char target[20],struct LinkedList*insert_people){
    struct LinkedList*p=find(head,target);
    if(!p)return -1;
    if(!p->back_head)p->back_head=insert_people;
    else{for(p=p->back_head;p->next;)p=p->next;p->next=insert_people;}
    return 0;
}