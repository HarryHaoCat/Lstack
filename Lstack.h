/*************************************************************************
	> File Name: Lstack.h
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018��07��10�� ���ڶ� 14ʱ00��36��
 ************************************************************************/
#ifndef _Lstack_H_
#define _Lstack_H_
#define MAXSIZE 1000
//typedef char ElementType;
typedef struct node {
	void*  Data;
	struct node* Next;
}NODE;
typedef struct
{
	NODE* Top;
	NODE* Bottom;
	int size;
	size_t data_size;
}Lstack;
Lstack* CreateLstack(const size_t data_size); //��ջ
void PushLstack(Lstack* s, void* data); //��ջ��
void *PopLstack(Lstack* PtrS);  //��ջ��
int LstackIsEmpty(Lstack* S);   //�ж�ջ�Ƿ�Ϊ�գ�

#endif 
