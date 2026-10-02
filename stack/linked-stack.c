#include <stdio.h>
#include <stdlib.h>
#define MAXN 10000
#define SElemType int
#define Status int
#define ERROR 0
#define OK 1
typedef struct Node{
    SElemType data;
    struct Node* next;
}Node,*LStackPtr;

typedef struct LStack{
    int count;
    LStackPtr top;
}LStack;
 
Status push(LStack* L,SElemType *e);
Status pop(LStack* L,SElemType *e);
int main(void){
    
    return 0;
}

Status push(LStack* L,SElemType *e){
    LStackPtr s=(LStackPtr)malloc(sizeof(Node));
    s->data=*e;
    s->next=L->top;
    L->top=s;
    L->count++;
    return OK;
}

Status pop(LStack* L,SElemType *e){
    if(L->count){return ERROR;}
    *e=L->top->data;
    LStackPtr s=L->top;
    L->top=L->top->next;
    free(s);
    L->count--;
    return OK;
}
