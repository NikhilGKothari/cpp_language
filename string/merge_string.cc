#include<iostream>
using namespace std;
int main()

{
	char str[40];
	char str2[40];
	char str3[80];
	int i,j=0;
	
	cout << "\nenter value: ";
	cin >> str;
	
	cout << "\nenter 2nd value: ";
	cin >> str2;
	
	for(i=0; str[i] != '\0'; i++)
	{
		str3[j]= str[i];
		j++;
	}
	for(i=0; str2[i] != '\0'; i++)
	{
		str3[j]= str2[i];
		j++;
	}
	str3[j] = '\0';
	cout << "str3 is:  "<< str3;
	return 0;
}