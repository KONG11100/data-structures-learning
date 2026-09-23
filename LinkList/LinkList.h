#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElmType;
typedef struct Node{
    ElmType data;
    struct Node* Next;
}Node;
typedef Node* LinkList;
Status GetElem(LinkList L,int i,ElmType *e);
Status InsertElem(LinkList *L,int i,ElmType *e);
Status DeletElem(LinkList *L,int i,ElmType *e);
void CreatListHead1(LinkList *L,int n);
void CreatListHead2(LinkList *L,int n);
Status ClearList(LinkList *L);
#endif // !LINKEDLIST_H
