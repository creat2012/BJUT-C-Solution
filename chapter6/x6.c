



/*
    this is a function
*/

void Computing(double src[], int n, double tag[], int *pmax, int *pmin)
{
    int i;
    *pmax = 0;  *pmin = 0;
    for(i = 0; i < n; ++ i){
        tag[i] = src[i] * src[i];
        if(src[i] > src[*pmax]) *pmax = i;
        if(src[i] < src[*pmax]) *pmin = i;
    }
}
