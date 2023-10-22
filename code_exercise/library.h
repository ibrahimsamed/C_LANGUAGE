#ifndef library
#define library
struct n
{
    int x;
    n* next;
};
void bastir(node *r);
void ekle (node *r,int x);
node * eklesirali(node * r,int x);
node * sil(node * r ,int x); 
#endif