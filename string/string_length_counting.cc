#include<iostream>

using namespace std;
int main()
{
	char str[20];
	int  i, length;
	
	cout << "enter str value: ";
	cin >> str;

	for(int i=0; str[i]!='\0'; i++)
	{
		cout << "str[]  value is :"<< i << " " << str[i] << "\n";
		length = i;
	}
	
	
	cout << "\nstr length is:  "<< length;
	return 0;
		

}