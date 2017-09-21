/*两个顺序表的差集*/
#include<stdion.h>
#define ListSize 200
typedef int DataType;
#include "SeqList.h"
void DelElem(SeqList *A,SeqList B);
void main()
{
  int i,j,flag;
  DataType e;
  SeqList A,B;
  InitList(&A);
  InitList(&B);
  for(i=0;i<=10;i++)
  {
    if(InsertList
