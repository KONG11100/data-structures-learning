#include <stdlib.h>
#include <stdio.h>
#define MAXN 10000
#define SElemType int
#define Status int
#define ERROR 0
#define OK 1
typedef struct{
    SElemType data[MAXN];
    int top;
} SqStack;

typedef struct{
    SElemType data[MAXN];
    int top1;
    int top2;
} SqDoubleStack;

Status push1(SqStack *S,SElemType *e);
Status push2(SqDoubleStack *S,SElemType *e,int topnumber);
Status Pop1(SqStack *S,SElemType *e);
Status Pop2(SqDoubleStack *S,SElemType *e,int topnumber);
int main(int argc, const char * argv[]) {
    
    return EXIT_SUCCESS;
}
Status push1(SqStack *S,SElemType *e){
    if(S->top==MAXN-1){return ERROR;}
    S->top++;
    S->data[S->top]=*e;
    return OK;
}
Status push2(SqDoubleStack *S,SElemType *e,int topnumber){
    if(S->top1+1==S->top2){return ERROR;}
    if(topnumber==1){
        S->data[++S->top1]=*e;
    }
    else if(topnumber==2){
        S->data[--S->top2]=*e;
    }
    else{return ERROR;}
    return OK;
}
Status Pop1(SqStack *S,SElemType *e){
    if(S->top==-1){return ERROR;}
    *e=S->data[S->top--];
    return OK;
}
Status Pop2(SqDoubleStack *S,SElemType *e,int topnumber){
    if(topnumber==1){
        if(S->top1==-1){
            return ERROR;
        }
        *e=S->data[S->top1--];
    }
    else if(topnumber==2){
        if(S->top2==MAXN){
            return ERROR;
        }
        *e=S->data[S->top2++];
    }
    return OK;
}
