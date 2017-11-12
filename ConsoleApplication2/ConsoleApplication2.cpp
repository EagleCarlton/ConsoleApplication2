// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//选择排序

#include "stdafx.h"
#include "stdio.h"
int index_max(const int p[], int n);
void selection(int p[], int n);
void display_array(const int p[], int n);
int main()
{
	int a[10], i;
	printf("input 10 integers:\n");
	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);
	selection(a, 10);
	display_array(a, 10);
    return 0;
}
int index_max(const int p[], int n)
{
	int i, max = 0;
	for (i = 1; i < n; ++i)
		if (p[max] <= p[i])
			max = i;
	return max;
}
void selection(int p[], int n)
{
	int size, max, temp;
	for (size = n; size > 1; size--)
	{
		max = index_max(p, size);
		if (max != size - 1)
		{
			temp = p[max];
			p[max] = p[size - 1];
			p[size - 1] = temp;
		}
	}
}
void display_array(const int p[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d\t", p[i]);
	printf("\n");
}
