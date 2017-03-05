

/*
    these function is for page160 11
*/


double averageSorce(int *num, int *scores, int n)
{
    double sum;
    int i;
    sum = 0;
    for(i = 0; i < n; ++ i){
        sum += scores[i];
    }
    return sum / n;
}

int GetSorce(int *num, int *scores, int n, int stu_no)
{
    int i;
    for(i = 0; i < n; ++ i){
        if(num[i] == stu_no)
            return scores[i];
    }
    return -1;
}

int More300(int *num, int *scores, int n, int *stu_no)
{
    int i, cnt;
    cnt = 0;
    for(i = 0; i < n; ++ i){
        if(scores[i] > 300)
            stu_no[cnt ++];
    }
    return cnt;
}
