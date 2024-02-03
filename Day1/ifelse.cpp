#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin >> savings;
    
    if (savings>5000){
        if (savings>10000){
            cout << "RoadTrip with GF1" << endl;
        } else {
            cout << "Shopping with GF1" << endl;
        }
    } else if(savings>2000){
        cout << "Go with GF2" << endl;
    } else {
        cout << "Go with Friends" << endl;
    }
    
    return 0;
}