


/*
    this function is to find the last n number
    double pointer is the best solution
*/

int reNth(NODE *h, int n)
{
    NODE *p1, *p2;
    p1 = h; p2 = h;
    while(n -- && p1 != NULL){
        p1 = p1 -> next;
    }
    if(p1 == NULL) return -1;
    while(p1 != NULL){
        p1 = p1 ->next;
        p2 = p2 ->next;
    }
    return p2;
}
