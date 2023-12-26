#include <stdio.h>
#include <stdlib.h>

int ikininkati(int x)
{
    int y;
    if((x%2==0)&&(x%3==0))
       y=3;
    else if(x%2==0)
    {
        y=1;
    }
    else if(x%3==0)
        y=2;

    else
        y=0;
    return y;
}

int main()
{
    int a;
    int iki;
    printf("sayiyi giriniz\n");
    scanf("%d",&a);
    if(ikininkati(a)==1)
    {
        printf("sayi cift\n");
    }
    else if (ikininkati(a)==3)
        printf("sayi 6 nin kati\n");
    else if (ikininkati(a)==2)
        printf("sayi 3 un kati\n");
    return 0;
}
