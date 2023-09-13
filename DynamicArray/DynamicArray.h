#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output()const;// ����� �� �������
	int * GetPointer()const;
	int GetSize()const;
	void Reverse();
	int Search(int a) const;
	void Sort();
	void ReSize(int size);
	// ����������� ��������� ������:
	//void ReSize(int size);// ��������� ������� �������



};

