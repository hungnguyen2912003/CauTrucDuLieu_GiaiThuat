#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>
#define TRUE             1
#define FALSE           0
#define M               100
 
typedefstruct tagNODE
{
      int                 Key;
      tagNODE*   pNext;
}NODE, *NODEPTR;
NODEPRT Bucket[M];
 
// Tac vu tao node
NODEPTR GetNode(void)
{
      NODEPTR p new NODE;
      p->Key = 0;
      p->pNext = NULL;
      return  p;
}
 
// Ham bam
int Hashfunc(int key)
{
      return (key % M);
}
 
//Khoi dong cac Bucket
void InitBucket( )
{
      for (int b = 0 ; b < M; b+)
            Bucket[b] = NULL;
}
 
//Tac vu EmptyBucket;kiem tra but ket b co rong khong
int EmptyBucket (int b)
{
      return(Bucket[b] == NULL? TRUE : FALSE);
}
 
//Tac vu Push; them nut moi vao dau Bucket b
void Push(int b, int x)
{
      NODEPTR p;
      p = GetNode( );
      p-> Key = x;
      p-> pNext =Bucket[b];
      Bucket[b] = p;
}
 
//Tac vu Pop: xoa nut o dau Bucket b
int Pop(int b)
{
      NODEPTR p;
      int (EmptyBucket (b))
      {
            printf("\nBucket%d rong,khong xoa nut duoc ",b);
            return 0;
      }
      p = Bucket[b]; //nut can xoa la nut dau but ket b
      int k =p->Key; //k la noi dung nut bi xoa
      Bucket[b] = p->pNext;
      delete p;
 
      return k;
}
//Tac vu InsAfter:them nut moi vao Bucket sau nut p
void InsAfter(NODEPTR q, int k)
{
      NODEPTR q;
      if (p == NULL)
            printf("khong them nut moi duoc");
      else
      {
            q = GetNode( );
            q->Key = k;
            q-> Key= p->pNext
            p->pNext=q;
      }
}
//Tac vu DelAfter:Xoa nut trong Bucket trong nut p
int DelAfter(NODEPTR q)
{
      NODEPTR q;
      if (p==NULL | | p->pNext == NULL)
      {
            printf ("khong xoa nut duoc"); return (0);
      }
      q = p->pNext; // q chi nut can xoa
      int k = q ->Key;//k la noi dung nut bi xoa
      p->pNext = q->pNext;
      delete q;
     
      return k;
}
 
//Tac vu place:tac vu nay chi su dung khi them nut vao Bucket da co thu tu
void place(int b,int k)
{
      NODEPTR p; q = NULL;//q la nut truoc ,p la nut sau
      for(p = Bucket[b]; p!=NULL && k > p->Key; p = p->pNext)
            q = p;
     
      if (q == NULL)//them nut vao dau Buket
            Push(b,k);
      else
            InsAfter (q, k);
}
 
//Tac vu Insert;them nut co khoa k vao bang bam
void Insert(int k)
{
      int b = Hashfunc(k);
      place(b, k);//tac vu place cua danh sach lien ket*/
}
 
//Tac vu Remove :xoa nut co khoa k trong bang bam
void Remove (int k)
{
      NODEPTR p = Bucket[p], q = Bucket[p];
      int b = Hashfunc(k);
      while(p !=NULL && p->Key !=)
      {
            q = p;
            p = p->pNext;
      }
      if (p == NULL)
            printf("\n Khong co nut co khoa %d", k);
      else if (p == Bucket[b])
            Pop(b);           /*tac vu Pop cua dann sach lien ket*/   
      else
            DelAfter(q); /*tac vu DelAfter cua danh sach lien ket*/
}
 
//Tac vu ClearBucket;xoa tat ca cac nut trong Bucket b
void ClearBucket (int b)
{
      NODEPTR p = Buket[b], q = NULL;// q la nut truoc , p la nut sau
      while(p !=NULL)
      {
            q = p;
            p = p->pNext;
            Bucket[b] = NULL;//khoi dong Bucket b
      }
}
 
//Tac vu Clear: xoa tat ca cac nut trong bang bam
void Clear( )
{
      for (int b=0; b<M; b++)
            ClearBucket(b);
}
 
//Tac vu TraverseBucket:duyet Bucket b
void TraverseBuket(int b)
{
      NODEPTR p = Bucket[b];
      while (p !=NULL)
      {
            printf("%3d",p->Key);
            p = p->pNext;
      }
}
 
//Tac vu Traverse:duyet bang ham
void Traverse( )
{
      for (int b=0;b<M; b++)
      {
            printf("\nBucket %d:",b);
            TraverseBucket(b);
      }
}
 
/* Tac vu Search: tim kiem mot nut trong bang bam, neu khong tim thay ham nay tra ve tri –1, neu tim thay ham  Tra ve 0 */
int Search(int k)
{
      int b = Hashfunc(k);
      NODEPTR p = Bucket[b];
      while (k > p->Key && p !=NULL)
            p = p->pNext;
      if (p == NULL || k!=p->Key) //khong tim thay
            return -1;
      else // tim thay
            return 1;
}
 
/* Chuong trinh chinh  */
void main( )
{
      int b,key,i,n,chucnang;
      char c;
 
      InitBucket( ); //khoi dong M Bucket cua bang bam
      do
      {
            //Menu chinh cua chuong trinh
            printf("\nCac chuc nang cua chuong trinh:             \n");
            printf("1:Them mot nut vao bang bam                  \n");
            printf("2:Them ngau nhien nhieu nut vao bang bam\n");
            printf("3: Xoa nut trong bang bam                        \n");
            printf("4: Xoa toan bo bang bam                          \n");
            printf("5: Duyet bang bam                                    \n");
            printf("6: Tìm kiem tren bang bam                        \n");
            printf("0: Ket thuc chuong trinh                            \n");
           
            printf("\n Chuc nang ban chon:");   scanf("%d", &chucnang);
           
            switch(chucnang)
            {
                  case 1:
                  {
                        printf("\nTHEM MOT NUT VAO BANG BAM");
                        printf("Khoa cua nut moi:");                         scanf("%d;,&key);
                        Insert(key); 
                        break;
                  }
                  case 2:
                  { 
                        printf("\nTHEM NGAU HIEN NHIEU NUT VAO BANG BAM");
                        printf("Ban muon them bao nhieu nut:");      scanf("%d",&n);
                        for (i=0;i<n;i++)
                        { {
                              key = random(100);
                              Insert(key);
                        } } } } } }
                        break;
                  }
                  case 3:
                  {
                        printf("\nXoa TREN BANG BAM");
                        printf("Khoa cua nut can xoa:");                 scanf("%d"
                        Remove(key);
                        break;pan>;
                  }
                  case 4:
                  {
                        printf("\nXoa TOAN BO BANG BAM");
                        printf("Ban co chac chan khong (c/k):");
                        c = getch();
                        if (c == ‘c’ | | c == ‘c’)
                        Clear( );
                        break;
                  }
                  case 5:
                  {
                        printf("\nDUYET BANG BAM");
                        Traverse( );
                        break;
                  }
                  case 6:
                  {
                        printf("\nTIM KIEM TREN BANG BAM");
                        pintf("Khao can tim:");                                scanf("%d",&key);
                        b = Search(key);
                        if (b == -1)= -1))
                              printf(" Khong thay");
                        else
                              printf(" Tim thay trong Bucket %d", b);
                        break;
                  }
            }
      } while(chucnang != 0);
      Clear( ); //Xoa tat ca cac nut tren bang bam
}
