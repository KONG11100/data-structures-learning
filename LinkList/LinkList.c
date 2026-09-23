#include "LinkList.h"
Status GetElem(LinkList L,int i,ElmType *e){
    int j=1;
    LinkList p;
    p=L->Next;
    while(p&&j<i){
        p=p->Next;
        j++;
    }
    if(!p||i<j){
        return ERROR;
    }
    *e=p->data;
    return OK;
}
Status InsertElem(LinkList *L,int i,ElmType *e){
    int j=1;
    LinkList p,s;
    p=*L;
    while(p&&j<i){
        p=p->Next;
        j++;
    }
    if(!p||i<j){
        return ERROR;
    }
    s=(LinkList)malloc(sizeof(Node));
    s->Next=p->Next;
    p->Next=s;
    s->data=*e;
    return OK;
}
Status DeletElem(LinkList *L,int i,ElmType *e){
    LinkList p,q;
    p=*L;
    int j=1;
    while(p&&j<i){
        p=p->Next;
        j++;
    }
    if(!p||j>i){
        return ERROR;
    }
    q=p->Next;
    p->Next=q->Next;
    *e=q->data;
    free(q);
    return OK;
}
void CreatListHead1(LinkList *L,int n){
    int i;
    LinkList p;
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->Next=NULL;
    srand((unsigned)time(0));
    for(i=0;i<n;i++){
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        p->Next=(*L)->Next;
        (*L)->Next=p;
    }
}
void CreatListHead2(LinkList *L,int n){
    int i;
    LinkList p,r;
    *L=(LinkList)malloc(sizeof(Node));
    r=*L;
    srand((unsigned)time(0));
    for(i=0;i<n;i++){
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        r->Next=p;
        r=p;
    }
    r->Next=NULL;
}
Status ClearList(LinkList *L){
    LinkList p,q;
    p=(*L)->Next;
    while(p){
        q=p->Next;
        free(p);
        p=q;
    }
    (*L)->Next=NULL;
    return OK;
}
