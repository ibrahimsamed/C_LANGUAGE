#include<stdio.h>
/*int ders1()
{
    int a;
    a=10;
    int b=3,c=4;
    int x;
    printf ("a : %d, b: %d , c: %d", a,b,c);
    printf("\n lütfen bir sayı giriniz");
    scanf("%d",&x);
    printf("girdiğiniz sayı : %2d",x);
    //yorum satırını bu şekilde de verebilyoz wowwww
    int pi;
    printf("%8.4f",pi=3.14);
}
int main ()
{
    int a,b,c,d;
    printf("litfen 3 sayı giriniz");
    scanf("%d%d%d",&a,&b,&c);
    d=a*a+b*b+3*c;
    printf("sonuç :%d",d);
}
//LOOPS
//for
int denem_for()
{
    for(int i=0;i<=10;i+=2)
    {
        printf("%d\n",i);
    }
}
//while
int deneme_while()
{
    int i=0;
    while (i<=10)
    {
        printf("%d\n",i);
        i+=2;
    }
}
// do while
int main ()
{   int i=0;
    do
    {
        printf("%d",i);
        i++;
    } while (i<10);    
}
// FUNCTIONS
int fak(int x)
{
    int sonuc=1;
    for(int i=x;i>0;i--)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}
int main ()
{
    int x;
    printf("lütfen bir sayı giriniz");
    scanf("%d",&x);
    printf("%d sayısının faktöriyeli =%d",x,fak(x));
}*/
int main()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if ((i+j)==6 || i==j)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
