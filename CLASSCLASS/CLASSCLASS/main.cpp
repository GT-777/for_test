#include "ourstring.h"
#include <iostream>

int main()
{
	/*int externalArr[5] = { 10, 20, 30, 40, 50 };
	MyString obj(5, externalArr);
	obj.Print();*/
	MyString obj2("Arman", 10, -1);
	obj2.Print();
	obj2.Tolower();
	obj2.Print();
	//MyString*  obj3 = &obj2;
	//obj3->Print();
 /*   obj.StringGiver();
	int size = obj.Size();
	std::cout << size;*/
	/*MyString obj1(obj);
	obj1.Print();
	obj.Print();*/
	/*MyString obj2;
	obj2 = obj;*/
	//obj2.Print();*/
	//MyString obj3 = std::move(obj);
	//obj3.Print();
	// obj.Tolower();
	//ob.Print();
	return 0;
}