#include <iostream>
using namespace std;

int multiplyBySeven(int num)
{
	return (num<<3)-num;
}

int main() {
	int num;
	cout << "Enter an Integer Number " << endl;
	cin >> num;
	
	int res = multiplyBySeven(num);
	
	cout << num << " times 7 is " << res << endl;
	return 0;
}
