/*划分顺序表，使左边的元素小于等于0，右边的大于0*/
#include<stdio.h>
#define ListSize 200
typedef int DataType;
#include"SeqList.h"
void SplitSeqList(SeqList *L);
void main()
{
  int i,flag,n;
  DataType e;
  seqList L;
  int a[]={88,-9,-28,19,-31,22,-50,62,-76);
  InitList(&L);
  n=sizeof(a)/sizeof*a[0]);/*初始化顺序表L*/
  for(i=1;i<=n;i++)/*将数组a中的元素插入顺序表L中*/
    if(InsertList(&L,i,a[i-1])==0)
    {
      printf("位置不合法");
      return;
      }
    }
    printf("顺序表L中的元素：\n");
    for(i=1;i<=L.length;i++)/*输出顺序表L中的每个元素*/
    {
      flag=GetElem(L,i,&e);/*返回顺序表L中的每个元素到e中*/
      if(flag==1)
        printf("%4d",e);
    }
    printf("\n");
    printf("顺序表L调整后（左边元素小于等于0，右边元素大于0）：\n");
    SplitSeqList(&L);/*调整顺序表*/
    for(i=1;i<=L.length;i++)/*输出调整后顺序表L中所有元素*/
    {
      flag=GetElem(L,i,&e);
      if(flag==1)
        printf("%4d",e);
    }
    printf("\n");
}
    void SplitSeqList(SeqList *L)
    /*将顺序表L分成两个部分：左边是小于等于0的元素，右边是大于0的元素*/
    {
      int i,j;/*定义两个指示器i和j*/
      DataType e;
      i=0,j=(&L).length-1;/*指示器i和j分别指示顺序表的左端和右端元素*/
      while(i<j)
      {
        while(L->list[i]<=0)/*i遇到小于等于0的元素*/
          i++;/*略过*/
        while(L->list[j]>0)/*j遇到大于0的元素*/
          j--;/*略过*/
          if(i<j)/*交换i和j指向的元素*/
          {
            e=L->list[i];
            L->list[i]=L->list[j];
            L->list[j]=e;
          }
      }
}
               
      
