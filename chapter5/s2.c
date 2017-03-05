

/*
    this source code is for 
*/

void inpit(int value[], int n)
{
    int i;
    for(i = 0; i < n; ++ i){
        scanf("%d", &value[i]);
    }
    return ;
}

void output(int value[], int n)
{
    int i;
    for(i = 0; i < n; ++ i){
        printf("%d ", value[i]);
    }
    printf("\n");
    return ;
}

void sort(int value[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; ++ i){
        for(j = 1; j < n - i - i; ++ j){
            if(value[j] < value[j - 1]){
                temp = value[j];
                value[j] = value[j - 1];
                value[j - 1] = temp;
            }
        }   
    }
    return ;
}

int MaxValue(int value[], int n)
{
    int i, max;
    max = value[0];
    for(i = 1; i < n; ++ i)
        if(value[i] > max)
            max = value[i];
    return max;
}

int MinValue(int value[], int n)
{
    int i, min;
    min = value[0];
    for(i = 1; i < n; ++ i)
        if(value[i] < min)
            min = value[i];
    return min;
}

double Average(int value, int n)
{
    int i;
    double sum;
    sum = 0;
    for(i = 0; i < n; ++ i)
        sum += valus[i];
    return sum / n;
}
