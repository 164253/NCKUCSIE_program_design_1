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

struct LinkedList* create(char target[20], int p1, int n, int m, int l, int p2){
    struct LinkedList* newNode = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    for(int i = 0; i < 6; i++){
        (newNode -> name)[i] = target[i];
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                for(int l = 0; l < 10; l++){
                    (newNode -> passwd_public)[i][j][k][l] = p1;
                }
            }
        }
    }
    newNode -> passwd_private = (int**)malloc(sizeof(int**) * n);
    for(int i = 0; i < n; i++){
        newNode -> passwd_private[i] = (int*)malloc(sizeof(int*) * m);
        for(int j = 0; j < m; j++){
            newNode -> passwd_private[i][j] = (int)malloc(sizeof(int));
            newNode -> passwd_private[i][j][0] = p2;
        }
    }
    return newNode;
}