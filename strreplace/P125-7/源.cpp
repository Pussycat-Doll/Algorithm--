#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷À≥–Ú¥Æstrreplace(&s,t,v)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef char DataType;
typedef struct StrSeqlist
{
	DataType* _arr;
	size_t _size;
	size_t _capacity;
}StrSeqlist;

void StrSeqInit(StrSeqlist* ps)
{
	assert(ps);
	ps->_arr = NULL;
	ps->_capacity = ps->_size = 0;
}

void StrSeqPush(StrSeqlist* ps, DataType x)
{
	assert(ps);
	if (ps->_size == ps->_capacity)
	{
		size_t newcapacity = (ps->_capacity == 0) ? 4 : ps->_capacity * 2;
		ps->_arr = (DataType*)realloc(ps->_arr, sizeof(DataType)*newcapacity);
		ps->_capacity = newcapacity;
	}
	ps->_arr[ps->_size++] = x;
	ps->_arr[ps->_size] = '\0';
}

size_t Strfind(StrSeqlist* ps, char* str1)
{
	assert(ps);
	size_t first = 0;
	size_t second = 0;
	size_t third = 0;
	size_t len = strlen(str1);
	while (first <= ps->_size)
	{
		while (ps->_arr[first] != str1[third])
		{
			first++;
		} 
		second = first;
		while (second <= ps->_size && third <= len)
		{
			if (ps->_arr[second] == str1[third])
			{
				++second;
				++third;
			}
			else
				break;
		}
		if (second - first == len)
			return first;
		++first;
	}
	return -1;
}
void Strreplace(StrSeqlist* ps, char* str1, char* str2)
{
	size_t index = Strfind(ps, str1);
	int len1 = strlen(str1);
	size_t i = 0;
	while (len1--)
	{
		ps->_arr[index++] = str2[i++];
	}
}
void print(StrSeqlist* ps)
{
	assert(ps);
	for (int i = 0; i < ps->_size; ++i)
	{
		printf("%c", ps->_arr[i]);
	}
	printf("\n");
}
int main()
{
	StrSeqlist s1;
	StrSeqInit(&s1);
	StrSeqPush(&s1, 'H');
	StrSeqPush(&s1, 'e');
	StrSeqPush(&s1, 'l');
	StrSeqPush(&s1, 'l');
	StrSeqPush(&s1, 'o');
	StrSeqPush(&s1, '!');
	print(&s1);
	Strreplace(&s1, "llo", "xxx");
	print(&s1);
	system("pause");
	return 0;
}