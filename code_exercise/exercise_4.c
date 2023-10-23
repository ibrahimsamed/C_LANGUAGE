#include<stdio.h>
/*
read number,create 0 matris numberxnumber however middel number( horizontal and vertical) will be 1
if number even 2 number in the middle  will be 1
 */
int main()
{
 int a;
 printf("lutfen bir sayi giriniz");
 scanf("%d",&a);    
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=a;j++)
        {
            if ((j==a/2||i==a/2)||(a%2==0&&(j==a/2-1||i==a/2-1)))
            {
                printf("1");
            }
            else 
                printf("0");            
        }
        printf("\n");
    }
}