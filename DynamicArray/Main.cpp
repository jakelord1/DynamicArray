#pragma once
#include "DynamicArray.h"
#include <iostream>
using namespace std;


DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
void main()
{
	DynamicArray a(15); // constructor 1 param
	DynamicArray b(5); // constructor 1 param
	a.Input();
	b.Input();
	cout << "Original" << endl;
	a.Output();
	
	DynamicArray arr1 = a + 5;
	cout << "Original+5" << endl;
	arr1.Output();
	DynamicArray arr2 = a - 3;
	cout << "Original-3" << endl;
	arr2.Output();
	DynamicArray arr3 = a * 2;
	cout << "Original*2" << endl;
	arr3.Output();
	cout << "\n\n";
	cout << "Copy" << endl;
	b.Output();
	DynamicArray arr4 = a - b;
	cout << "Original-copy" << endl;
	arr4.Output();

	DynamicArray arr5 = a + b;
	cout << "Original+copy" << endl;
	arr5.Output();

	DynamicArray arr6 = ++a;
	cout << "++Original" << endl;
	arr6.Output(); 

	DynamicArray arr7 = --a;
	cout << "--Original" << endl;
	arr7.Output();
	system("pause");
}