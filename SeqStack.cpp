#include<iostream>
using namespace std;
typedef int DataType;
class SeqStack
{
private:
	DataType *base;
	DataType *top;
	int size;
public:
	SeqStack(int stacksize=100)
	{base=new DataType[stacksize];
	top=base;
	size=stacksize;
	};
	~SeqStack()
	{delete[] base;
	top=NULL;base=NULL;
	};
	int Empty_Stack();
	int Push_Stack(DataType e);
	int Pop_Stack(DataType &e);
	int GetTop_Stack(DataType &e);

};        //À≥–Ú¿‡’ª

int SeqStack::Empty_Stack ()
{
	return ((top<=base));
}

int SeqStack::Push_Stack(DataType e)
{
	if (top-base<size)
	{
		*top=e;top++;
		return 1;
	}
	else
		return 0;
}

int SeqStack::Pop_Stack(DataType &e)
{
	if(top>base)
	{
		top--;
		e=*top;
		return 1;
	}
	else return 0;
}
int SeqStack:: GetTop_Stack(DataType &e)
{
	if(top>base)
	{  e=*(top-1);
	   return 1;
	}
	else 
		return 0;
}

int main()
{
	return 0;
}