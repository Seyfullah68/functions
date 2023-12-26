#include <stdio.h>
#include <stdlib.h>

void islemiyap(float *x1,float *x2,float *y, char *islem)
{
    switch(*islem)
    {
    case '+':
     {
        *y=*x1+*x2;
        break;
     }
     case '-':
     {
        *y=*x1-*x2;
        break;
     }
        case '*':
     {
        *y=*x1**x2;
        break;
     }
     case '/':
     {
        *y=*x1/ *x2;
        break;
     }
     default:
        printf("yanlis islem girdiniz");
    }
}

int main()
{
    char islem;
    printf("lutfen yapilacak islemi giriniz\n");
    scanf("%c",&islem);
    float sonuc,sayi1,sayi2;
    printf("lutfen sayilari giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);
    islemiyap(&sayi1,&sayi2,&sonuc,&islem);
    printf("\n sonuc: %.3f",sonuc);
    return 0;
}
