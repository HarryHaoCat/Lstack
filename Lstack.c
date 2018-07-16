/*************************************************************************
	> File Name: Lstack.c
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018��07��10�� ���ڶ� 14ʱ00��36��
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include"Lstack.h"

//������ջ
Lstack* CreateLstack(const size_t data_size) 
{
	Lstack* s = (Lstack*)malloc(sizeof(Lstack));
	NODE* n = (NODE*)malloc(sizeof(NODE));
	n->Next = NULL;
	s->Top = n;
	s->Bottom = s->Top;
	s->size = 0;
	s->data_size = data_size;
	printf("Create a linked-stack success!\n");
	return s;
}

//��ջ
void PushLstack(Lstack* s, void* data)
{
	NODE *P = (NODE*)malloc(sizeof(NODE));
	P->Data = malloc(s->data_size);
	memcpy(P->Data, data, s->data_size);
	P->Next = s->Top;
	s->Top = P;
	s->size++;
}

//��ջ
void* PopLstack(Lstack * s)  
{
	if(s->Top == s->Bottom)
		printf("This is a empty linked-stack!\n");
	void* data = s->Top->Data;
	NODE *fs = s->Top;
	s->Top = s->Top->Next;
	free(fs);
	return data;
}

//�ж�ջ�Ƿ�Ϊ��
int LstackIsEmpty(Lstack* s)
{
	if (s->Top == s->Bottom)
	{
		printf("This is an empty linked-stack!\n");
		return 1;
	}
	else{
		printf("This is not an empty linked-stack!\n");
		return 0;
	}
}

//��ӡջ
/*void PrintStack(Lstack* p)
{
	assert(p->Top != p->Bottom, "This an empty linked-stack!\n");
	NODE* s= p->Top;
	while (s->Next != p->Bottom)
	{
		printf("%d->",s->Data);
		s = s->Next;
	}
	printf("%d",s->Data);

}*/
