/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin >> a >> b;
    
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout << i <<endl;
        }
    }
    return 0;
}
