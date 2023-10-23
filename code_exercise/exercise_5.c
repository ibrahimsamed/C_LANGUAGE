/*
read number find prime number that lower than input number
*/
#include <stdio.h>
int main()
{
    int a;
    printf("lutfen bir sayi giriniz");
    scanf("%d",&a);
    for (int  i = a; i >=2; i--)
    {
        int asal =1;
        for (int  j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                asal=0;
            }
        }
        if(asal==1)
        {
            printf("%d",i);
            break;
        }
        
    }
}    