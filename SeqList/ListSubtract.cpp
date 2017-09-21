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
    if(InsertList(&A,i,i*2+10==0)
       {
         printf("位置不合法");
         return;
       }
  }
  for(i=1,j=10;i<=8;j=j+2,i++)
       {
         if(InsertList(&B,i,j+i*2)==0)
         {
           printf("位置不合法");
           return;
         }
       }
       printf("顺序表A中的元素： \n");
       for(i=1;i<=A.length;i++)
       {
         flag=GetElem(A,i,&e);
         if(flag==1)
           printf("%4d,&e);
                  }
                  printf("\n");
       printf("顺序表B中的元素： \n");
                  for(i=1;i<=B.length;i++)
                  {
                    flag=GetElem(B,i,&e);
                    if(flag==1)
                      printf("%4d,e);
                             }
                             printf("\n");
                             printf("将在A中出现B的元素删除后，A中的元素（即A-B）: \n");
                             DelElem(&A,B);
                             for(i=1;i<=A.length;i++)
                             {
                               flag=GetElem(A,i,&e);
                               if(flag==1)
                                 printf("%4d",e);
                             }
                             printf("\n");
                             }
                             void DelElem(SeqList *A,SeqList B)
                             {
                               int i,flag,pos;
                               DataType e;
                               for(i=1;i<=B.length;i++)
                               {
                                 flag=GetElem(B,i,&e);
                                 if(flag==1)
                                 {
                                   pos=LocateElem(&A,e);
                                   if(pos>0)
                                     DeleteList(A,pos,&e);
                                 }
                               }
                             }
                             
                             
