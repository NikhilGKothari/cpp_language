#include<iostream>

using namespace std;
int main()
{
	int arr[3][3], i ,j , total=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout << "enter value arr"<< i << j << " ";
			cin >>  arr[i][j];
		}
	}
	
	cout << "\n";
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		cout << arr[i][j] << " ";

			if(arr[j] < arr[i])
			{
				total += arr[i][j];
			}

		}
        cout << "\n";
	}

	cout << " \t\t lower triangle elements total is : "<< total;

		
	return 0;
}