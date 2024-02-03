#include<iostream>
using namespace std;

int main()
{    
    char button;
    cout << "Input a Character ";
    cin >> button;
    
    switch(button) 
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    
    case 'b':
        cout << "Heya" << endl;
        break;
    
    case 'c':
        cout << "Hiee" << endl;
        break;
    
    case 'd':
        cout << "Heyy" << endl;
        break;
    
    default:
        cout << "Bye Bye" << endl;
        break;
    }
    return 0;
}