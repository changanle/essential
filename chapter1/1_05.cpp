#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //<写入>
    string user_name;
    int num_tries;
    int num_score;
    //以输入模式开启seq_data.txt
    ofstream outfile("1_05.txt",ios_base::app); //声明一个ofstream对象
    cout << "请输入名字：";
    cin >> user_name;
    cout << "请输入尝试次数：";
    cin >> num_tries;
      cout << "请输入得分：";
    cin >> num_score;
    if(!outfile){
        cerr<<"Oops! Unable to save session data!\n";
    }else{
        outfile << user_name << ' '
                << num_tries << ' '
                << num_score <<endl;//数据写入
    }

    return 0;
}

