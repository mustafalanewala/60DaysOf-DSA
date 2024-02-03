#include<iostream>
using namespace std;

int main()
{    
    int n1,n2;
    cout << "Input 2 Numbers" << endl;
    cin >> n1 >> n2;
    
    char opr;
    cout << "Enter Operation" << endl;
    cin >> opr;
    
    switch(opr) 
    {
    case '+':
        cout << n1+n2 << endl;
        break;
        
    case '-':
        cout << n1-n2 << endl;
        break;
        
    case '*':
        cout << n1*n2 << endl;
        break;
                
    case '/':
        cout << n1/n2 << endl;
        break;
     
    default:
        cout << "Bye Bye" << endl;
        break;
    }    

    return 0;
}