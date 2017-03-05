

/*
    this function is for computing the 1*2 + 2*3 + .....+ n * (n+1)
*/



long function(int n)
{
    long ans = 0, i;
    for(i = 1; i <= n; ++ i){
        ans += i * (i + 1);
    }
    return ans;
}
