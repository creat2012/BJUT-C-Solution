


/*
    this is function is for.... you know
*/

double calculate(int n)
{
    int i;
    double result = 1.0;
    for(i = 1; i <= n; ++ i){
        result = result * (2.0 * i) / (2.0 * i - 1) * (2.0 * i) / (2.0 * i + 1);
    }
    return result;
}
