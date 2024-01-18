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



struct LinkedList* find3(struct LinkedList* head, char target[20]){
    struct LinkedList* ret = NULL;
    if(head == NULL)return ret;
    if(strcmp(head -> name, target) == 0){
        return head;
    }
    if(head -> back_head != NULL){
        ret = find3(head -> back_head, target);
    }
    if(ret != NULL)return ret;
    if(head -> next != NULL){
        ret = find3(head -> next, target);
    }
    return ret;
}

int check(int x){
    if(x >= 10 || x < 0)return 1;
    return 0;
}

int update_public(struct LinkedList* head, char target[20], int idx1, int idx2, int idx3, int idx4, int* val){
    struct LinkedList* node = find3(head, target);
    if(node == NULL)return -1;
    int tmp = *val;
    if(check(idx1) || check(idx2) || check(idx3) || check(idx4)){
        return -2;
    }
    *val += node -> passwd_public[idx1][idx2][idx3][idx4];
    node -> passwd_public[idx1][idx2][idx3][idx4] = tmp; 
    return 0;
}