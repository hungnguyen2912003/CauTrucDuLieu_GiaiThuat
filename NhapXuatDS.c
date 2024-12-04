#include <stdio.h>
#include <stdlib.h>

struct nut
{
    int data;
    struct nut *next;
};

typedef struct nut NODE;

NODE *Khoitao(void)
{
    return NULL;
}

NODE *NhapDS(NODE *head)
{
    int x;
    NODE *newNode;
    do
    {
        printf("Nhap so nguyen (0:dung): ");
        scanf("%d", &x);
        if(x!=0){
            newNode = (NODE*)malloc(sizeof(NODE));
            newNode->data = x;
            newNode->next = head;
            head = newNode;
        }
    }while(x!=0);
    return head;
}

void XemDS(NODE *head)
{
    NODE *temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);    
        temp = temp->next;
    }
}

int main(){
    NODE *head = Khoitao();
    printf("Nhap so nguyen duong vao danh sach lien ket don cho den khi nhap '0' thi stop\n");
    head = NhapDS(head);
    XemDS(head);
}
