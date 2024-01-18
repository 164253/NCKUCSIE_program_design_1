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

struct LinkedList* create(char target[20],int p1,int n,int m,int l,int p2){
    struct LinkedList*ans=malloc(sizeof(struct LinkedList));
    int i=0,j,k,o;
    for(;target[i];++i)ans->name[i]=target[i];
    ans->name[i]='\0';
    for(i=0;i<10;++i)for(j=0;j<10;++j)for(k=0;k<10;++k)for(o=0;o<10;++o)ans->passwd_public[i][j][k][o]=p1;
    ans->passwd_private=(int***)malloc(n*sizeof(int**));
    for(i=0;i<n;++i){
        ans->passwd_private[i]=(int**)malloc(m*sizeof(int*));
        for(j=0;j<m;++j){
            ans->passwd_private[i][j]=(int*)malloc(l*sizeof(int));
            for(k=0;k<l;++k){
                ans->passwd_private[i][j][k]=p2;
            }
        }
    }
    return ans;
}