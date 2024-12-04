#include <stdio.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;

struct list{
    NODE *head;
    NODE *tail;
};
typedef struct list LIST;

void KhoiTao(LIST &l){
    l.head = NULL;
    l.tail = NULL;
}

NODE *KhoitaoNode(int x){
    NODE *p = new NODE;
    p->data = x;
    p->next = NULL;
    return p;
}

void XuatDS(LIST l){
    for(NODE *i = l.head; i != NULL; i = i->next)
        printf("%d ", i->data);
}

NODE ThemvaoDau(LIST &l, NODE *p){
    if(l.head == NULL)
        l.head = l.tail = p;
    else{
        p->next = l.head;
        l.head = p;
    }
}

NODE ThemvaoCuoi(LIST &l, NODE *p){
    if(l.head == NULL)
        l.head = l.tail = p;
    else{
        l.tail->next = p;
        l.tail = p;
    }
}

int main(){
    LIST l;
    KhoiTao(l);
    int n;
    printf("Nhap so luong NODE: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        printf("Nhap gia tri thu %d: ", i);
        scanf("%d", x);
        NODE *p = KhoitaoNode(x);
        ThemvaoCuoi(l,p);
    }
    printf("Danh sach lien ket vua nhap: ");
    XuatDS(l);
}