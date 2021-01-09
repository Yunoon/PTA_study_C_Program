int mycmp(const char *s1,const char *s2)
{
    int i=0;
    while(1)
    {
        if(s1[i]=='\0')
            break;
        if(s2[i]=='\0')
            break;
        if(s1[i]!=s2[i])
            break;
        i++;
    }
    return s1[i] - s2[i];

}