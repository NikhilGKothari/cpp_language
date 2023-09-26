#include<iostream>

using namespace std;
int main()
{
	char str[20];
	char str2[40];
	int  i, length,j=0;
	
	cout << "enter str value: ";
	cin >> str;

	for(i=0; str[i]!='\0'; i++)
	{
		length = i;
	}
	
	for(i=length; i>=0; i--)
	{
		str2[j] = str[i];
		j++;
		cout << "\n"<< (char)str[i]; 
	}
	
	//str2[j] = '\0';
	cout << "reverse str is = " <<str2 ;

	return 0;
		

}