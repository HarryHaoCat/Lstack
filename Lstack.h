/*************************************************************************
	> File Name: Lstack.h
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月10日 星期二 14时00分36秒
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
Lstack* CreateLstack(const size_t data_size); //建栈
void PushLstack(Lstack* s, void* data); //进栈；
void *PopLstack(Lstack* PtrS);  //出栈；
int LstackIsEmpty(Lstack* S);   //判断栈是否为空；

#endif 
