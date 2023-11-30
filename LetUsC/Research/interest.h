void funt(int a,int *b)
{
    int n1,n2,n3,n4,n5,t;
    t = a;
    n1 = t%10;
    t = t/10;
    n2 = t%10;
    t = t/10;
    n3 = t%10;
    t = t/10;
    n4 = t%10;
    t = t/10;
    n5 = t;
    *b = n1;
    *(b+1) = n2;
    *(b+2) = n3;
    *(b+3) = n4;
    *(b+4) = n5;
}
