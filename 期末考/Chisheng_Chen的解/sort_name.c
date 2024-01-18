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

int cmp(const void *a, const void *b){
    return *(char *)a - *(char *)b;
}

int sort_name(char target[40]){
    int n = 0;
    while(target[n] != '\0')n++;
    qsort(target, n, sizeof(target[0]), cmp);
}


