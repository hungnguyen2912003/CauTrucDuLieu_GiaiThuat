#include <stdio.h>
#include <stdlib.h>

struct nut
{
    int data;
    struct nut *next;
};
typedef struct nut Node;

Node *KhoiTao(void){
    return NULL;
}

Node *NhapDS(Node *head){
    int x;
    Node *newNode;
    do
    {
        printf("Nhap so nguyen (0:dung): ");
        scanf("%d", &x);
        if(x!=0){
            newNode = (Node*)malloc(sizeof(Node));
            newNode->data=x;
            newNode->next=head;
            head = newNode;
        }
    } while (x!=0);
    return head;
}

void XemDS(Node *head){
    Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

float TongSoLe(Node *head){
    Node *temp = head;
    float s = 0;
    int count = 0;
    while(temp != NULL)
    {
        if(temp->data%2==1)
        {
            s+=temp->data;
            count++;
        }
        temp = temp->next;
    }
    return s/count;
}

int main(){
    Node *head = KhoiTao();
    printf("Nhap vao so nguyen duong vao danh sach lien ket don, nhap '0' de stop\n");
    head = NhapDS(head);
    XemDS(head);
    printf("\nTong so le trong danh sach lien ket don: %.1f", TongSoLe(head));
}