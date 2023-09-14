#include "DynamicArray.h"
#include<Windows.h>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	size = S;
	ptr = new int[S];	
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	if (ptr != 0)
	{
		delete[] ptr;
    }
	Sleep(1000);
}
void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output() const
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] <<"\t";
	}
	cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize() const
{
	return size;
}

void DynamicArray::Reverse()
{
	int buff = 0;
	for (size_t i = 0; i < size; i++)
	{
		buff = ptr[i];
		ptr[i] = ptr[size - i - 1];
		ptr[size - i - 1] = buff;
	}
}

int DynamicArray::Search(int a) const
{
	for (size_t i = 0; i < size; i++)
	{
		if (ptr[i] == a) {
			return i;
			break;
		}
	}
	return -1;
}

void DynamicArray::Sort()
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ptr[j] > ptr[j + 1]) {
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}

void DynamicArray::ReSize(int size)
{
	DynamicArray buff(this->size);
	for (size_t i = 0; i < this->size; i++)
	{
		buff.ptr[i] = this->ptr[i];
	}
	delete[] this->ptr;
	this->ptr = new int[this->size + size];
	for (size_t i = 0; i < this->size; i++)
	{
		this->ptr[i] = buff.ptr[i];
	}
	for (size_t i = this->size; i < this->size + size; i++)
	{
		this->ptr[i] = 0;
	}
	this->size += size;
}

DynamicArray DynamicArray::operator+(int b)
{
	DynamicArray buff(this->size + b);
	for (size_t i = 0; i < this->size; i++)
	{
		buff.ptr[i] = this->ptr[i];
	}
	for (size_t i = this->size; i < this->size + b; i++)
	{
		buff.ptr[i] = 0;
	}
	return buff;
}

DynamicArray DynamicArray::operator-(int b)
{
	int sn = this->size - b;
	DynamicArray buffe(sn);
	for (size_t i = 0; i < this->size-b; i++)
	{
		buffe.ptr[i] = this->ptr[i];
	}
	return buffe;
}

DynamicArray DynamicArray::operator*(int b)
{
	DynamicArray New(this->size);
	for (size_t i = 0; i < this->size; i++)
	{
		New.ptr[i] = this->ptr[i] * b;
	}
	return New;
}

DynamicArray DynamicArray::operator-(DynamicArray minus)
{
	int sn = this->size - minus.size;
	if (sn > 0) {
		DynamicArray buffe(sn);
		for (size_t i = 0; i < this->size - minus.size; i++)
		{
			buffe.ptr[i] = this->ptr[i];
		}
		return buffe;
	}
	else {
		DynamicArray buffe;
		return buffe;
	}
	
}

DynamicArray DynamicArray::operator+(DynamicArray plus)
{
	DynamicArray buff(this->size + plus.size);
	for (size_t i = 0; i < this->size; i++)
	{
		buff.ptr[i] = this->ptr[i];
	}
	for (size_t i = this->size; i < this->size + plus.size; i++)
	{
		buff.ptr[i] = plus.ptr[i-this->size];
	}
	return buff;
}

DynamicArray& DynamicArray::operator++()
{
	DynamicArray buff(this->size);
	for (size_t i = 0; i < this->size; i++)
	{
		buff.ptr[i] = this->ptr[i];
	}
	delete[] this->ptr;
	this->ptr = new int[this->size+1];
	for (size_t i = 0; i < this->size; i++)
	{
		this->ptr[i] = buff.ptr[i];
	}
	this->ptr[this->size] = 0;
	this->size++;
	return *this;
}

DynamicArray& DynamicArray::operator--()
{
	DynamicArray buff(this->size);
	for (size_t i = 0; i < this->size; i++)
	{
		buff.ptr[i] = this->ptr[i];
	}
	delete[] this->ptr;
	this->ptr = new int[this->size - 1];
	for (size_t i = 0; i < this->size - 1; i++)
	{
		this->ptr[i] = buff.ptr[i];
	}
	this->size--;
	return *this;
}


