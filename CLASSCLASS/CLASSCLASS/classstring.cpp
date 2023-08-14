#include "ourstring.h"
#include <iostream>

//MyString::MyString(int size, int* arr)
//{
//	m_size = size;
//	m_arr = arr;
//	m_arr = new int [m_size] {};
//	for (int i = 0; i < m_size; i++)
//	{
//		m_arr[i] = i + 1;
//	}
//}
//MyString::MyString(const MyString& other) : m_arr(other.m_arr)
//{
//	m_size = other.m_size;
//	m_arr[0] = 44;
//	/*m_arr = new int [m_size] {};
//	for (int i = 0; i < m_size; i++)
//	{
//		m_arr[i] = other.m_arr[i];
//	}*/
//}
//MyString& MyString:: operator = (const MyString& other)
//{
//	if (this != &other)
//	{
//		delete[] m_arr;
//		m_size = other.m_size;
//		m_arr = new int [m_size] {};
//		for (int i = 0; i < m_size; i++)
//		{
//			m_arr[i] = other.m_arr[i];
//		}
//	}
//	return *this;
//}
//MyString::MyString(MyString&& other) 
//{
//	
//		m_size = other.m_size;
//		
//		m_arr = new int [m_size] {};
//		//m_arr[0] = 44;
//
//		other.m_size = 0;
//		other.m_arr = nullptr;
//
//}
MyString::MyString(const char* name) {
	m_name = name;
    int newsize = Size();
   /* while (name[newsize] != '\0') {
        ++newsize;
    }*/

	
	
   
	//char* mutable_m_name = const_cast<char*>(m_name);
	m_str = new char[newsize + 1] {};

    //for (size_t i = 0; i <= newsize; i++) {
    //    mutable_m_name[i] = name[i]; 
    //    
    //}
	for (int i = 0; i < newsize; i++) {
		m_str[i] = m_name[i];  
		 
	}
	m_str[newsize] = m_name[newsize];
	m_str[newsize] = '\0';
	

}

MyString::MyString(const MyString& str, ui pos, ui len)
{
	
	int newsize = 0;

	while (str.m_str[newsize] != '\0')
	{
		newsize++;
	}
	
	if (len < pos)
	{
			std::swap(len, pos);
			len = 0;	
	}   

	if (len > 0 && pos < 0 )
	{
		pos = 0;
		
	}
  
	m_str = new char[newsize + 1]{};
	for (int i = 0; i < newsize; ++i)
	{
     m_str[i] = str.m_str[i + pos];
	}
	m_str[len - pos] = '\0';

}

void MyString::Print()
{
	/*std::cout << "m_arr ";
	for (int i = 0; i < m_size; i++)
	{
		std::cout << this->m_arr[i]<< " ";
	}
	std::cout << std::endl;*/
	//std::cout << m_name << std::endl;
	std::cout << m_str << std::endl;
	
}
MyString::~MyString()
{

	//delete[] m_name;

	delete[] m_str;



}
//void MyString::StringGiver()
//{
//	MyString ob;
//	
//	Print();
//}
int MyString::Size()
{
	int i = 0;
	while (m_name[i] != '\0')
	{
		i++;
	}
	return i;
}
void MyString::Tolower()
{
	int index = 0;
	while (m_str[index] != '\0')
	{
		if (m_str[index] >= 'A' && m_str[index] <= 'Z')
		{
			m_str[index] = m_str[index] + 32;
		}
		++index;
	}
}
//MyClass(int age, const char* name) : m_age(age) {
//	// Allocate memory for m_name and copy the input string
//	size_t nameLength = 0;
//	while (name[nameLength] != '\0') {
//		++nameLength;
//	}
//	m_name = new char[nameLength + 1]; // +1 for null terminator
//	for (size_t i = 0; i < nameLength; ++i) {
//		m_name[i] = name[i];
//	}
//	m_name[nameLength] = '\0'; // Null terminator at the end
//}


// MATRIX
//int** MyString:: Matrix (const int* arr, const int& size)
//{
//	
//	m_mat = new int* [size] {};
//	for (int i = 0; i < size; ++i)
//	{
//		m_mat[i] = new int [arr[i]] {};
//		for (int j = 0; j < arr[i]; ++j)
//		{
//			m_mat[i][j] = rand() % 10 + 1;
//		}
//	}
//	return m_mat;
//}
//
//void MyString::PrintMat()
//{
//	for (int i = 0; i < m_size; ++i)
//	{
//		for (int j = 0; j < m_arr[i]; ++j)
//		{
//			std::cout << m_mat[i][j];
//		}
//		std::cout << std::endl;
//	}
//   
//}
//
//void MyString::Filler()
//{
//	int size = 0;
//	std::cin >> size;
//	int* arr = Arr(size);
//	int** mat = Matrix(arr, size);
//	for (int i = 0; i < m_size; ++i) {
//		delete[] mat[i];
//	}
//	delete[] mat;
//	delete[] arr;
//	
//}
//
//int* MyString::Arr(const int& size)
//{
//	m_size = size;
//	
//	m_arr1 = new int [size] {};
//	for (int i = 0; i < size; ++i)
//	{
//		m_arr[i] = rand() % 10 + 1;
//	}
//	return m_arr;
//}
