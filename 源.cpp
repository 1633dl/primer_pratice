#include<iostream>
#include<vector>
#include<string>
#include<time.h>
using namespace std;
int main()
{
	int a = 10;
	int *p = &a;
	if (p)
		cout << "*****" << endl;
	else
		cout << "!!!!!!!" << endl;
	system("pause");
	return 0;
}