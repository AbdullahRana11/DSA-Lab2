#include<iostream>
using namespace std;

int main() {

    string *str_reverse = new string();
    cout<<"Enter String:                ";
    getline(cin, *str_reverse);

    int size= (*(str_reverse)).length();

    for(int i=0; i<size/2;i++){
        char temp= (*str_reverse)[i];
        (*str_reverse)[i] = (*str_reverse)[size - i - 1];
        (*str_reverse)[size - i - 1] = temp;
    }

    cout<<"The Reversed String is:      '"<<*str_reverse<<"'"<<endl;

    delete str_reverse;
    return 0;
}