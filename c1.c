double addition(int i, int j)
{
    double k;
    k=i+j;
    return k;

void main()
{
    int a, b, c;
    a = 2;
    b = 3;
    c = a+b;
    if(c>5)
    printf("c = %d : je suis superieur à 5 \n");
    else
    printf("c = %d :je suis inferieur ou egal a 5 \n");
    while (c>0)
    {
        c = c-1;
        printf("c = %d : je suis toujours supérieur ou egal a 0 \n", c);
    }

}
