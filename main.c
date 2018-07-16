/*************************************************************************
	> File Name: main.c
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018��07��10�� ���ڶ� 14ʱ00��36��
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include"Lstack.h"


int main()
{
	//��ջ
	Lstack *p;
	Lstack *p1;
	Lstack *p2;

	char m[10] = { 'a', 'b', 'c', 'w', 'e', 'r', 't', 'y', 'u', 'i'};  //����10��char���ַ�������
	int  I[10] = { 3, 10, 15, 23, 45, 56, 34, 2355, 3241, 545};        //����10��int���͵�����
	double d[10] = { 1.3, 5.32, 54.5, 23.65, 43.4, 42.54, 242.56, 53.54, 53.45, 66.9 }; //����10��double���͵�����
	p = CreateLstack(sizeof(char));
	for (int i = 0; i < 10; i++)
	{
		PushLstack(p, &m[i]);
		printf("%c push!\n", m[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%c pop!\n", *(char*)PopLstack(p));
	}
	LstackIsEmpty(p); 

	p1 = CreateLstack(sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		PushLstack(p1, &I[i]);
		printf("%d push!\n", I[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d push!\n", *(int*)PopLstack(p1));
	}
	LstackIsEmpty(p1);

	p2 = CreateLstack(sizeof(double));
	for (int i = 0; i < 10; i++)
	{
		PushLstack(p2, &d[i]);
		printf("%3.3f push!\n", d[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%3.3f pop!\n", *(double*)PopLstack(p2));
	}
	LstackIsEmpty(p2);
	return 0;
}
