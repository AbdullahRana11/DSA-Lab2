#include<iostream>
using namespace std;

int main() {

    string *str_reverse = new string();
    cout<<"Enter String:                ";
    getline(cin, *str_reverse);

    int size= (*(str_reverse)).length();

    for(int i=0; i<size/2;i++){

        // store current character in a temporary variable
        char temp= (*str_reverse)[i];  

        // replace character at current index with its opposite from the end
        (*str_reverse)[i] = (*str_reverse)[size - i - 1]; 

        // put the saved character into the opposite position
        (*str_reverse)[size - i - 1] = temp;
    }

    cout<<"The Reversed String is:      '"<<*str_reverse<<"'"<<endl;

    delete str_reverse;  //free dynamically allocated memory
    return 0;
}