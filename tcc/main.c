//
//  main.c
//  tcc
//
//  Created by s20181102932 on 2019/11/19.
//  Copyright © 2019 wjx. All rights reserved.
//

#include <stdio.h>
#include<stdbool.h>
struct car{
    char ad;
    int id;
    int atime;
    int dtime;
};
struct SNode{
    struct car * a;
    int top;
    int maxsize;
};
struct SNode * creatpark(int maxsize)
{
    struct SNode * S = (struct SNode *)malloc(sizeof(struct SNode));
    S->a=(struct car *)malloc(maxsize * sizeof(struct car)); //?
    S->top=-1;
    S->maxsize=maxsize;
    return S;
}
bool IsFull(struct SNode * S)
{
    return(S->top==S->maxsize-1);
}
bool Push(struct SNode * S,struct car a)
{
    if(IsFull(S)){
        printf("停车场已满");
        return false;
    }
    else {
        S->a[++(S->top)]=a;
        return false;
    }
}
bool IsEmpty(struct SNode * S)
{
    return(S->top==-1);
}
struct car pop(struct SNode * S)
{
    if(IsEmpty(S)){
        printf("停车场为空");
        //return;
    }
    else
        return(S->a[S->top--]);
}
int main(int argc, const char * argv[]) {

    return 0;
}
