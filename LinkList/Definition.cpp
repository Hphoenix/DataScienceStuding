typedef struct Node
  /*单链表的存储结构用C语言描述*/
{
  DataType data;
  struct Node *next;
}ListNode,*LinkList; /*ListNode是链表的结点类型，LinkList是指向链表结点的指针类型*/

/*ListNode L和LinkList *L是功能相当的定义，都表示为定义L为指向单链表的指针类型*/

/*基本运算
（1）初始化单链表*/
void InitList(LinkList *head)
{
  if((*head=(LinkList)malloc(sizeof(ListNode)))==NULL)
    /*为头结点分配一个存储空间*/
    exit(-1);
  (*head)->next=NULL;/*将单链表的头结点指针域置为空*/
}

/*判断单链表是否为空*/
int ListEmpty (LinkLIst head)
{
  if(head->next==NULL)
    return 1;
  else
    return 0;
}

/*按序号查找单链表中第i个结点。查找成功返回该结点的指针表示成功；否则返回NULL表示失败。*/
ListNode *Get(LinkList head,int i)
{
  ListNode *p;
  int j;
  if(ListEmpty(head))
    return NULL;
  if(i<1)
    return NULL;
  j=0;
  p=head;
  while(p->next!=NULL&&j<i)
  {
    p=p->next;
    j++;
  }
  if(j==i)
    return p;
  else
    return NULL;
}
