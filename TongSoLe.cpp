#include <stdio.h>
#include <conio.h>

struct node
{
    int data;
    struct node *pNext;
};
typedef struct node NODE;

struct list
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;

void KhoiTao(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

NODE *KhoitaoNODE(int x){
    NODE *p = new NODE;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void ThemVaoDau(LIST &l, NODE *p)
{
    if(l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

void ThemVaoCuoi(LIST &l, NODE *p){
    if(l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }    
}

void XuatDS(LIST l)
{
    for(NODE *i = l.pHead; i != NULL; i = i->pNext)
        printf("%d ",i->data);
}

int TongSoLe(LIST l){
    int s = 0;
    for(NODE *i = l.pHead; i != NULL; i = i->pNext)
        if(i->data%2==1)
            s+=i->data;
    return s;
}

int main()
{
    LIST l;
    KhoiTao(l);
    int n;
    printf("Nhap so luong Node: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        printf("Nhap gia tri thu %d: ", i);
        scanf("%d", &x);
        NODE *p = KhoitaoNODE(x);
        ThemVaoDau(l,p);
    }
    printf("Danh sach lien ket don vua nhap: ");
    XuatDS(l);
    printf("\nTong so le trong danh sach la: %d", TongSoLe(l));
}