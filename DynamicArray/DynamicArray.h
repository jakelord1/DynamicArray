#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output()const;// вывод на консоль
	int * GetPointer()const;
	int GetSize()const;
	void Reverse();
	int Search(int a) const;
	void Sort();
	void ReSize(int size);
	// реилизовать следующие методы:
	//void ReSize(int size);// изменение размера массива



};

