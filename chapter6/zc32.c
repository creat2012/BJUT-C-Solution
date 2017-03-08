

/*
    this source code is for linklist
*/

#include <stdio.h>

#define MAX 0xffff
typedef struct node
{
    int item;
    struct node *next;
}NODE;


NODE* CreateList()
{
    NODE *root = (NODE*)malloc(sizeof(NODE));
    root -> item = -1;
    root -> next = NULL;
    NODE *p , *pre, *temp;
    int x ;
    do{
        printf("please input the number(end of -1) : ");
        p = root; pre = root;
        scanf("%d", &x);
        if(x == -1) break;
        while(p -> next != NULL){
            if(p -> item > x) break;
            pre = p; p = p -> next;
        }
        temp = (NODE*)malloc(sizeof(NODE));
        temp -> item = x; 
        if(p -> item > x){
            temp -> next = p;
            pre -> next = temp;
        }
        else {
            p->next = temp;
            temp->next = NULL;
        }
    }while(x != -1);
    return root -> next;
}


void printList(NODE *root)
{
    NODE *p = root;
    while(p != NULL){
        printf("%d->", p -> item);
        p = p -> next;
    }
    return ;
}

int main()
{
    NODE *root = CreateList();
    printList(root);
    return 0;
}
