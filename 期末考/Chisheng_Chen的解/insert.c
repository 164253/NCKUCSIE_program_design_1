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

struct LinkedList* find2(struct LinkedList* head, char target[20]){
    struct LinkedList* ret = NULL;
    if(head == NULL)return ret;
    if(strcmp(head -> name, target) == 0){
        return head;
    }
    if(head -> back_head != NULL){
        ret = find2(head -> back_head, target);
    }
    if(ret != NULL)return ret;
    if(head -> next != NULL){
        ret = find2(head -> next, target);
    }
    return ret;
}

int insert(struct LinkedList* head, char target[20], struct LinkedList* insert_people){
    struct LinkedList* node = find2(head, target);
    if(node == NULL)return -1;
    if(node -> back_head == NULL){
        node -> back_head = insert_people;
        return;
    }
    node = node -> back_head;
    while(node -> next != NULL){
        node = node -> next;
    }
    node -> next = insert_people;
    return 0;

}


