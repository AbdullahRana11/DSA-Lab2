#include<iostream>
using namespace std;

void analyze_pointer(int *ptr){
	cout << "Memory Address: " << ptr << endl;
	cout << "Value at Address: " << *ptr << endl;
}

int main() {
	int iValue = 56;
	analyze_pointer(&iValue);
	int *new_value = new int;
	*new_value = 78;
	analyze_pointer(new_value);
	return 0;
}