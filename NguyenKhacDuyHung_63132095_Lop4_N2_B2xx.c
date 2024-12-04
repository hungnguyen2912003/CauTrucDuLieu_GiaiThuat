#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
5.Tao danh sách liên ket don luu tru các so nguyên. 
Tính tong các so chia het cho 3 trong danh sách liên ket don dã tao.
*/
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

struct list
{
    NODE *head;
    NODE *tail;
};
typedef struct list LIST;

void KhoiTao(LIST &l){
    l.head = NULL;
    l.tail = NULL;
}

NODE *TaoNode(int x){
    NODE *p;
    p = new NODE;
    p->data = x;
    p->next = NULL;
    return p;
}

void XuatDS(LIST l){
    for(NODE *i = l.head; i != NULL; i = i->next)
        printf("%d ",i->data);
}

void Themvaodau(LIST &l, NODE *p){
	if(l.head==NULL){
		l.head = p;
		l.tail = p;
	}
	else{
		p->next = l.head;
		l.head = p;
	}
}

int TongSoChiaHetCho3(LIST l){
    int s = 0;
    for(NODE *i = l.head; i != NULL; i = i->next)
        if(i->data%3==0)
            s+=i->data;
    return s;
}

void InSoChiaHetCho3(LIST l){
    for(NODE *i = l.head; i != NULL; i = i->next)
        if(i->data%3==0)
            printf("%d ", i->data);
}

int main(){
    LIST l;
    KhoiTao(l);
    int n;
    printf("Nhap so luong NODE trong danh sach: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        printf("Nhap gia tri thu %d: ", i);
        scanf("%d", &x);
        NODE *p = TaoNode(x);
        Themvaodau(l,p);
    }
    printf("Danh sach lien ket vua nhap la: ");
    XuatDS(l);
    printf("\nCac so chia het cho 3 la: ");
    InSoChiaHetCho3(l);
    printf("\nTong cac so chia het cho 3 la: %d", TongSoChiaHetCho3(l));
}