/*
0.	Tao danh sách liên ket don luu tru các so thuc. Chi ra vi trí so 0 dau tiên trong danh sách liên ket don dã tao
*/

#include <stdio.h>
#include <stdlib.h>

struct nut
{
	float data;
	struct nut *next;
};
typedef struct nut Node;

Node *KhoitaoDS(void)
{
	return NULL;
}

Node *nhapDS(Node *head, float x)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = x;
	newNode->next = head;
	return head;
}

void XemDS(Node *head){
	Node *temp;
	temp = head;
	while(temp!=NULL){
		printf("%.1f ",temp->data);
		temp = temp->next;
	}
}

int VTDT(Node *head){
	Node *temp;
	temp = head;
	int pos = 0;
	while(temp!=NULL)
	{
		if(temp->data==0)
			return pos;
		temp = temp->next;
		pos++;	
	}
	return -1;
}

int main(){
	Node *head;
	int n;
	float x;
	do
	{
		printf("Nhap so luong NODE trong danh sach lien ket don: ");
		scanf("%d", &n);
	}while(n<0);
	for(int i = 1; i <= n; i++){
		printf("\nNhap gia tri thu %d: ", i);
		scanf("%f", &x);
		head = nhapDS(head,x);
	}
	printf("\nDanh sach lien ket don vua nhap la: ");
	XemDS(head);
	if(VTDT(head)==-1)
	{
		printf("\nKhong co so 0 trong danh sach");
	}
	else
	{
		printf("\nVi tri so 0 dau tien trong danh sach la: %d", VTDT(head));
	}
}
