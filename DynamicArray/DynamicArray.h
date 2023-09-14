#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int f);
	DynamicArray(const DynamicArray&);
	~DynamicArray();
	void Input();
	void Output()const;
	int * GetPointer()const;
	int GetSize()const;
	void Reverse();
	int Search(int a) const;
	void Sort();
	void ReSize(int size);
	
	DynamicArray operator+(int b);
	DynamicArray operator-(int b);
	DynamicArray operator*(int b);

	DynamicArray operator-(DynamicArray minus);
	DynamicArray operator+(DynamicArray plus);
	DynamicArray& operator++();
	DynamicArray& operator--();

};

