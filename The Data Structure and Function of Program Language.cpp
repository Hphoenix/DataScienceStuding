#define ListSize 100
typedef struct
{
  DataType list[ListSize];
  int length;
}SeqList;

/*定义一个线性表*/
SeqList L;

/*定义一个指向顺序表的指针*/
SeqList *L;

/*初始化线性表*/
void InitList(SeqList *L)
{
  L->length=0;
  /*把线性表的长度置为0*/
}

/*判断线性表是否为空,线性表为空返回1，否则返回0*/
int ListEmpty(SeqList L)
{
  if (L.lenghth==0)
    return 1;
  else
    return 0;
}


int GetElem(SeqList L,int i,DataType*e)
/*查找线性表中第i个元素，查找成功将该值返回给e，并返回1表示成功；否则返回-1表示失败。*/
{
    if(i<1||i>L.length)
    /*在查找第i个元素之前，判断该序号是否合法*/
        return -1;
    *e=L.list[i-1];
    /*将第i个元素的值赋给e*/
    return 1;
}
