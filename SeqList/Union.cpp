/*合并两个线性表中的元素（相同元素只保留一个）*/

#include<stdio.h>
#define ListSize 200
typedef int DataType;   /*定义元素类型为整型*/
#include"SeqList.h"	
void UnionAB("SeqList *A,SeqList B"); /*将LB中但不在LA中的元素插入LA中*/

void main()
{
