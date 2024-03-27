#include <iostream>
#include <algorithm>
using namespace std;

bool check(string atm);

int main()
{
	string atm;
	cout<<"Enter your atm number: ";
	cin>>atm;
	cout<<endl;
	if(check(atm) == true) cout<<atm<<" ATM number is Valid";
	else cout<<atm<<" ATM number is Invalid"; 
	
	return 0;
}

bool check(string atm)
{
	reverse(atm.begin(), atm.end());
	int sum = 0;
	int len = atm.length();
	for(int i = 0; i < len; i++)
	{
		int digit = atm[i] - '0';
		if(i % 2 == 1)
		{
			digit *= 2;
			if(digit > 9) digit -= 9;
		}
		sum += digit;
	}
	return (sum % 10 == 0);
}