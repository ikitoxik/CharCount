#include <fstream>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in_stream;
	char ch = 0;
	int count = 0;

	in_stream.open("CharCount.cpp");
	while (!in_stream.eof())
	{
		in_stream.get(ch);
		count++;
	}
	cout << count;
	in_stream.close();
	return 0;
}