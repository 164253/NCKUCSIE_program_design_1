#include<stdlib.h>
#include<string.h>
#include<stdio.h>

struct LinkedList;

struct LinkedList{
    char name[20];
    int passwd_public[10][10][10][10];
    int*** passwd_private;
    struct LinkedList* back_head;
    struct LinkedList* next;
};

struct LinkedList* find6(struct LinkedList* head, char target[20]){
    struct LinkedList* ret = NULL;
    if(head == NULL)return ret;
    if(strcmp(head -> name, target) == 0){
        return head;
    }
    if(head -> back_head != NULL){
        ret = find6(head -> back_head, target);
    }
    if(ret != NULL)return ret;
    if(head -> next != NULL){
        ret = find6(head -> next, target);
    }
    return ret;
}

int LowerToUpper(struct LinkedList* head, char target[20]){
    struct LinkedList* node = find6(head, target);
    if(node == NULL)return -1;
    for(int i = 0; i < 20; i++){
        if(node -> name[i] >= 'a' && node -> name[i] <= 'z'){
            node -> name[i] += 'A' - 'a';
        }
    }
    return 0;
}


