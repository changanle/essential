#include <iostream>
#include <string>
using namespace std; //标准命名空间std::
int main(){
    string user_name;
    cout<<"Please enter you name:";
    cin >> user_name;
    cout<<'\n'
    <<"hello,"
    <<user_name
    <<"...and goodbye!\n";
    return 0;
}