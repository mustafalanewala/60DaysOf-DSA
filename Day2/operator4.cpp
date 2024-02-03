#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    int j = 20;
    int k;
    
    k = i-- - i++ + --j - ++j + --i - j-- + ++i -j++;
    
    cout <<i<<" "<<j<<" "<<k<<" "<<endl;
    return 0;
}