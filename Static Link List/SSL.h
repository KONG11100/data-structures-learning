#ifndef SSL_H
#define SSL_H
#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define MAXNUMBER 1000
typedef int Status;
typedef int ElmType;
typedef struct {
    ElmType data;
    int cur;
}Component,StaticLinkList[MAXNUMBER];
Status InitList(StaticLinkList L);
int Length(StaticLinkList L);
int Malloc_SSL(StaticLinkList L);
void Free_SSL(StaticLinkList L,int i);
Status ListDelete(StaticLinkList L,int i);
Status ListInsert(StaticLinkList L,int i,ElmType e);
#endif//!SSL_H
