
using ui = unsigned int;
class MyString
{
private:
	//std::string m_name;
	int m_size;
	int* m_arr;
	int* m_arr1;
	int** m_mat;
	const char* m_name;
	char* m_str;



	
public:
	static const ui npos = -1;
	MyString() = default;
	~MyString();
	MyString(int, int*);
	MyString(const char* );
	MyString(const MyString& str, ui pos, ui len = npos);

	
public:
	MyString (const MyString&);
	MyString& operator =(const MyString&);
	MyString(MyString&&);
public:
	void Print();
	void StringGiver();
	int Size();
	void Tolower();
	void PrintMat();
	int* Arr(const int&);
	void Filler();
	int** Matrix(const int*, const int&);
	


};



