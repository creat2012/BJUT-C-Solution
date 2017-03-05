


/*
    this function is for change the number base 10 to base 2
*/


void toBinary(int value, int binary[])
{
    int i;
    for(i = 0; i < 16; ++ i){
        binary[i] = value % 2;
        value /= 2;
    }
    return ;
}
