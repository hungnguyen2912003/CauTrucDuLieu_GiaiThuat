#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *KhoitaoDS(void){
    return NULL;
}

Node* nhapDS(Node *head){
    int x;
    Node* p = new Node;
    do
    {
        printf("Nhap so nguyen x: ");
        scanf("%d", &x);
        if(x!=0){
            p = (Node*)malloc(sizeof(Node));
            p->data = x;
            p->next = head;
            head = p;
        }
    } while (x!=0);
    return head;
}

Node* xemDS(Node *head){
    Node *temp;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void TimSDNN(Node* head, int *pos, float *min){
    Node* temp;
    *pos = 0;
    *min = -1;
    temp = head;
    int i = 1;
    while((temp != NULL) && (*min == -1)){
        if(temp->data>0){
            *min = temp->data;
            *pos = i;
        }
        i++;
        temp = temp->next;
    }
    printf("So duong dau tien trong danh sach: %.1f\n", min);
    printf("Vi tri cua so duong do: %d", pos);
    while(temp != NULL){
        if((temp->data>0) && (temp->data<*min)){
            *min = temp->data;
            *pos = i;
        }
        i++;
        temp =temp->next;
    }
    printf("So duong nho nhat trong danh sach: %.1f\n", min);
    printf("Vi tri cua so duong do: %d", pos);
}

int main(){
    Node *head;
    Node *pos;
    float min;
    head = KhoitaoDS();
    nhapDS(head);
    xemDS(head);
    TimSDNN(head,pos,min);
}