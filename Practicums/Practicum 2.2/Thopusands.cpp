#include <iostream>


using namespace std;

int main()

{
	cout << "Please enter a number greater than or equal to 1000 without a comma.\n";
	string number;
	cin >> number;
	
	int n = number.length();
	string first_half = number.substr(0, n-3 );
	int n2 = first_half.length(); 
	string second_half = number.substr(n2 ,3);
	cout << first_half << "," << second_half << endl;
}