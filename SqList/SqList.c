#include "SqList.h"
Status GetElm(SqList* L,int i,ElmType *e){
    if(L->length==0||i<1||i>L->length){
        return ERROR;
    }
    *e=L->data[i-1];
    return OK;
}
Status ListInsert(SqList* L,int i,ElmType* e){
    int k;
    if(L->length==MAXNUMBER){
        return ERROR;
    }
    if (i<1||i>L->length+1){
        return ERROR;
    }
    if(i<=L->length){
        for(k=L->length;k>=i;k--){
            L->data[k+1]=L->data[k];
        }
    }
    L->data[i-1]=*e;
    L->length++;
    return OK;
}
Status ListDelete(SqList* L,int i,ElmType* e){
    int k;
    if(L->length==0){
        return ERROR;
    }
    if(i<1||i>L->length){
        return ERROR;
    }
    *e=L->data[i-1];
    if(i<L->length){
        for(k=i;k<L->length;k++){
            L->data[k-1]=L->data[k];
        }
    }
    L->length--;
    return OK;
}
