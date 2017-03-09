


/*
    this source code is for judging the list is ordered or not
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *creat()
{
    NODE *root, *p;
    int x;
    root = (NODE*)malloc(sizeof(NODE));
    root -> next = NULL; p = root;
    while(scanf("%d", &x) == 1){
        p->next = (NODE*)malloc(sizeof(NODE));
        p = p->next;
        p->data = x;
        p->next = NULL;
    }
    return root -> next;
}


int isOrder(NODE *h)
{
    while(h->next != NULL){
        if(h->data > h->next->data)
            return 0;
        h = h->next;
    }
    return 1;
}



int main()
{
    NODE  *root = creat();
    if(isOrder(root))
        printf("this list is ordered!\n");
    else 
        printf("sry this list is not ordered");
    return 0;
}
