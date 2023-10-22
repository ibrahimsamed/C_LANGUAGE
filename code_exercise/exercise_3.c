// create own header
// we write header named library.h 
// we call this header in here
#include<stdio.h>
#include<stdlib.h>
#include "library.h"
void bastir(node * r)
{
    while(r !=NULL)
    {
        printf("%d",r->x);
        r=r->next;
    }
    printf("\n");
}