#include "SSL.h"
Status InitList(StaticLinkList space){
    int i;
    for(i=0;i<MAXNUMBER-1;i++){
        space[i].cur=i+1;
    }
    space[MAXNUMBER-1].cur=0;
    return OK;
}
int Length(StaticLinkList L){
    int len=0;
    int i;
    i=L[MAXNUMBER-1].cur;
    while(i){
        len++;
        i=L[i].cur;
    }
    return len;
}
int Malloc_SSL(StaticLinkList L){
    int i=L[0].cur;
    if(L[0].cur){
        L[0].cur=L[i].cur;
    }
    return i;
}
void Free_SSL(StaticLinkList L,int k){
    L[k].cur=L[0].cur;
    L[0].cur=k;
}
Status ListDelete(StaticLinkList L,int i){
    int j,k;
    if(i<1||i>Length(L)){
        return ERROR;
    }
    j=MAXNUMBER-1;
    for(k=1;k<=i-1;k++){
        j=L[j].cur;
    }
    k=L[j].cur;
    L[j].cur=L[k].cur;
    Free_SSL(L, k);
    return OK;
}
Status ListInsert(StaticLinkList L,int i,ElmType e){
    int j,k,l;
    if(i<1||i>Length(L)+1){
        return ERROR;
    }
    j=Malloc_SSL(L);
    l=MAXNUMBER-1;
    if(j){
        L[j].data=e;
        for(k=1;k<=i-1;k++){
            l=L[l].cur;
        }
            L[j].cur=L[l].cur;
            L[l].cur=j;
            return OK;
    }
    return ERROR;
}
