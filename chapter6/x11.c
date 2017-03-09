


/*
    this source code is for bulding a list
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

void printList(NODE *root)
{
    while(root != NULL){
        printf("-> %d", root->data);
        root = root -> next;
    }
}
int main()
{
    NODE  *root = creat();
    printList(root);
    return 0;
}
