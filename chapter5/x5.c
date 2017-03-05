


/*
    this function is for changing the Upper to the lower
*/

void Upper2Lower(char *str)
{
    char *p = str;
    while(*p != '\0'){
        if(*p >= 'A' && *p <= 'Z'){
            *p = *p + 32;
        }
    }
    return ;
}
