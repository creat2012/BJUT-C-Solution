


/*
    this function is select sort    
*/


void select_sort(int value[], int n)
{
    int i, j, index, temp;
    for(i = 0; i < n - 1; ++ i){
        index = i;
        for(j = i + 1; j < n; ++ j)
            if(value[j] < value[index])
                index = j;
        if(index != i){
            temp = value[index];
            value[index] = value[j];
            value[j] = temp;
        }
    }
    return ;
}
