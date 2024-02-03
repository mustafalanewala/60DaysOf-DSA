#include<iostream>
using namespace std;

int main(){

    int a; //Declaration 
    a=100; //Initialisation
    
    cout << "size of int a is " << sizeof(a) << endl;
    
    float b;
    cout << "size of float b is " << sizeof(b) << endl;
    
    char c;
    cout << "size of char c is " << sizeof(c) << endl;
    
    bool d;
    cout << "size of bool d is " << sizeof(d) << endl;
    
    short int e;
    long int f;
    cout << "size of short int e is " << sizeof(e) << endl;
    cout << "size of long int f is " << sizeof(f) << endl;
    
    return 0;
}       