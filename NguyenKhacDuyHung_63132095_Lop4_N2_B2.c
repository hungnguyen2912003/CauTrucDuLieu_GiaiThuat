#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE *next;
};
typedef struct NODE* Node;

Node *KhoitaoDS(void){
    return NULL;
}

Node *nhapDS(Node *head){
    int x;
    do{
        printf("Nhap x: ");
        scanf("%d",&x);
        if(x!=0){
            Node p = (Node)malloc(sizeof(struct NODE));
            p->data = x;
            p->next = head;
            head = p;
        } 
    } while(x!=0);
    return head;
}
void xemDS(Node *head){
    Node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int TongSoChiaHetCho3(Node *head){
    int s = 0;
    while(head!=NULL){
        if((*head)->data%3==0)  s++;
        *head=(*head)->next;
    }
    return s;
}

// void InSoChiaHetCho3(Node *head){
//     for (*head; *head != NULL ; *head = (*head)->next)
//         if((*head)->data%3==0)
//             printf("[%d]", (*head)->data);
// }
 
int main(){
    Node head;
    KhoitaoDS(head);
    nhapDS(&head);
    printf("Danh sach lien ket vua nhap la: ");
    xemDS(&head);
    printf("\nCac so chia het cho 3 la: %d", TongSoChiaHetCho3(&head));
    // InSoChiaHetCho3(&head);
    // printf("\nTong cac so chia het cho 3 la: %d", TongSoChiaHetCho3(&head));
}