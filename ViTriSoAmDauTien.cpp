#include <stdio.h>

struct node{
    float data;
    struct node *next;
};
typedef struct node NODE;

struct list{
    NODE *head;
    NODE *tail;
};
typedef struct list LIST;

void Khoitao(LIST &l){
    l.head = NULL;
    l.tail = NULL;
}

NODE *khoitaonode(float x){
    NODE *p = new NODE;
    p->data = x;
    p->next = NULL;
    return p;
}

void xuatDS(LIST l){
    for(NODE *i = l.head; i != NULL; i = i->next)
        printf("%.1f ", i->data);
}

NODE themvaodau(LIST &l, NODE *p){
    if(l.head==NULL)
        l.head = l.tail = p;
    else{
        p->next = l.head;
        l.head = p;
    }
}


int main(){
    LIST l;
    NODE *p;
    Khoitao(l);
    int n;
    printf("Nhap so luong NODE: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        float x;
        printf("Nhap gia tri thu %d: ",i);
        scanf("%f", &x);
        NODE *p = khoitaonode(x);
        themvaodau(l,p);
    }
    printf("Danh sach lien ket don vua nhap: ");
    xuatDS(l);
}