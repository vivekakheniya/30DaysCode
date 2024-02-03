//Program for checking if the no. entered is Odd or Even
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter a No.:";
    cin>>num;
    cout<<endl;
    if(num%2==0)
    {
        cout<<"Number entered is a Even No...";
    }
    else if(num==0){
        cout<<"0 is neither even nor odd no.";
    }
    else{
        cout<<"Number entered is a Odd No...";
    }
    return 0;
}
