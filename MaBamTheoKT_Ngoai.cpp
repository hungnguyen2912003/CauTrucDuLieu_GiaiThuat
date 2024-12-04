#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define B 10

//Ma Bam: Ket noi truc tiep

struct nut
{
	int key;
	struct nut *next;
};
typedef struct nut Node;

Node *bucket[B];

Node *KhoiTaoNode(void){
	Node *p = new Node;
	p->key = 0;
	p->next = NULL;
	return p;
}

int Hash(int key)
{
	return (key%B);
}

void KhoiTaoBuckets(){
	for(int b = 0; b < B; b++)
		bucket[b] = NULL;
}

//Kiem Tra Bang Bam co Rong khong?
int EmptyBucket(int b)
{
	if(bucket[b] == NULL)
		return 1;
	return 0;
}

void AddNode(int b, int x)
{
	Node *p;
	p = KhoiTaoNode();
	p->key = x;
	p->next = bucket[b];
	bucket[b] = p;
}



int main(){
//	Node *head;
//		int n;
//		int x;
//		do
//		{
//			printf("Nhap so luong NODE trong danh sach lien ket don: ");
//			scanf("%d", &n);
//		}while(n<0);
//		for(int i = 1; i <= n; i++){
//			printf("\nNhap gia tri thu %d: ", i);
//			scanf("%d", &x);
//			head = NhapDS(head,x);
//		}
//		printf("\nDanh sach lien ket don vua nhap la: ");
//		duyetDS(head);
}

