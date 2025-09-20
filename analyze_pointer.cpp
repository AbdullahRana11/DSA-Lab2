#include<iostream>
using namespace std;

void analyze_pointer(int *ptr){
	cout << "Memory Address: " << ptr << endl;           //prints address
	cout << "Value at Address: " << *ptr << endl;       //prints value
}

int main() {
	int iValue = 56;
	analyze_pointer(&iValue);    // Pass the address of a stack variable to the function

	int *new_value = new int;    // Dynamically allocate memory for an integer
	*new_value = 78;
	analyze_pointer(new_value);

	delete new_value;           // free dynamically allocated memory
	return 0;
}