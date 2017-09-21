/*合并两个线性表中的元素（相同元素只保留一个）*/

#include<stdio.h>
#define ListSize 200
typedef int DataType;   /*定义元素类型为整型*/
#include"SeqList.h"	
void UnionAB("SeqList *A,SeqList B"); /*将LB中但不在LA中的元素插入LA中*/

void main()
{
  int i,flag;
  DataType e;
  DataType a[]={81,32,51,12,39,25};
  DataType b[]={12,44,39,16,28,6,61,76};
  SeqList LA,LB;    /*声明顺序表LA和LB*/
  InitList (&LA);   /*初始化顺序表LA*/
  InitList (&LB);   /*初始化顺序表LB*/
  for(i=0;i<sizeof(a)/sizeof(a[0]);i++)   /*将数组a中的元素插入表LA中*/
  {
    if(InsertList(&LA,i+1,A[i])==0)
    {
      printf("位置不合法");
      return;
    }
  }
  for(i=0;i<sizeof(b)/sizeof(b[0]);i++)   /*将数组a中的元素插入表LB中*/
  {
    if(InsertList(&LB,i+1,b[i])==0)
    {
      printf("位置不合法");
      return;
    }
  }
  printf("顺序表LA中的元素：\n");
  for(i=1;i<=LA.length;i++)   /*输出顺序表LA中的每个元素*/
  {
      flag=GetElem(LA,i,&e);    /*返回顺序表LA中的每个元素到e中*/
      if(flag==1)
        printf("%4d",e);
  }
  printf("\n");
  printf("顺序表LB中的元素: \n");
  for(i=1;i<=LB.length;i++)
  {
    flag=GetElem(LB,i,&e);
    if(flag==1)
      printf("%4d",e);
  }
  printf("\n");
  printf("将LB中但不在LA中的元素插入LA中： \n");
  UnionAB(&LA,LB);
  for(i=1;i<=LA.length;i++)
  {
    flag=GetElem(LA,i,&e);
    if(flag==1)
      printf("%4d,e);
  }
  printf("\n");
}

void UnionAB(SeqList *A,SeqList LB)
             
             
