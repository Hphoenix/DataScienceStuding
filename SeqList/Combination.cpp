#include<stdio.h>
#define ListSize 200
typedef int DataType;
#include"SeqList.h"
void MergeList(SeqList A,SeqList B,SeqList *C);

void main()
{
  int i,flag;
  DataType a[]={8,17,17,25,29};
  DataType b[]={3,9,21,21,26,57};
  DataType e;
  SeqList A,B,C;
  InitList(&A);
  InitList(&B);
  InitList(&C);
  for(i=1;i<=sizeof(a)/sizeof(a[0]);i++)
  {
    if(InsertList(&A,i,a[i-1])==0)
    {
      printf("位置不合法");
    }
  }
  for(i=1;i<=sizeof*b)/sizeof(b[0]);i++)
  {
    if(InsertList(&B,i,b[i-1])==0)
    {
      printf("位置不合法");
      return;
    }
  }
  printf("顺序表A中的元素：\n");
  for(i=1;i<A.length;i++)
  {
    flag=GetElem(A,i,&e);
    if(flag==1)
      printf("%4d",e);
  }
  printf("\n");
  printf("顺序表B中的元素：\n");
  for(i=1;i<=B.length;i++)
  {
    flag=GetElem(B,i,&e);
    if(flag==1)
      printf("%4d",e);
  }
  printf("\n");
  printf("将A和B中的元素合并得到C：\n");
  MergeList(A,B,&C);
  for(i=1;i<=C.length;i++)
  {
    flag=GetElem(C,i,&e);
    if(flag==1)
      printf("%4d",e);
  }
  printf("\n");
}
void MergeList(SeqList A,SeqList B,SeqList *C)
{
  int i,j,k;
  DataType e1,e2;
  i=1;j=1;k=1;
  while(i<A.length&&j<=B.length)
  {
    GetElem(A,i,&e1);
    GerElem(B,j,&e2);
    if(e1<=e2)
    {
      InsertList(C,k,e1);
      i++;
      k++;
    }
    else
    {
      InsertList(C,k,e2);
      j++;
      k++;
    }
  }
  while(i<=A.length)
  {
    GetElem(A,i,&e1);
    InsertList(C,k,e1);
    i++;
    k++;
  }
  while(j<=B.length)
  {
    GetElem(B,j,&e2);
    InsertList(C,k,e2);
    j++;
    k++;
  }
  C->length=A.length+B.length;
}
