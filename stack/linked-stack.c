#include <stdio.h>
#define MAXN 1000
#define OK 1
#define ERROR 0
typedef int Status;
typedef int QElem;
typedef struct {
    QElem data[MAXN];
    int head;
    int last;
}Qeue;

int Length(Qeue Q);
Status EQ(Qeue *Q,QElem *e);
Status DQ(Qeue *Q,QElem *e);

int Length(Qeue Q){
    return (Q.last-Q.head+MAXN)%MAXN;
}

Status EQ(Qeue *Q,QElem *e){
    if((Q->last+1)%MAXN==Q->head){
        return ERROR;
    }
    Q->data[Q->last]=*e;
    Q->last=(Q->last+1)%MAXN;
    return OK;
}

Status DQ(Qeue *Q,QElem *e){
    if(Q->head==Q->last){
        return ERROR;
    }
    *e=Q->data[Q->head];
    Q->head=(Q->head+1)%MAXN;
    return OK;
}






