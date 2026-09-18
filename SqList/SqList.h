#ifndef _LINED_LIST_H_
#define _LINED_LIST_H_
#include <stdlib.h>
#include <stdio.h>
#define MAXNUMBER 200
#define ERROR 0
#define OK 1
#define fALSE 0
#define TRUE 1
typedef int Status;
typedef int ElmType;
typedef struct
{
    ElmType data[MAXNUMBER];
    int length;
}SqList;
Status GetElm(SqList* L,int i,ElmType *e);
Status ListInset(SqList* L,int i,ElmType *e);
Status ListDelete(SqList* L,int i,ElmType* e);
#endif // !_LINED_LIST_H_
