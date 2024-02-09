#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
    int array1[4]={10,20,30,40};
    cout<<endl<<array1[1];
    return 0;
}
