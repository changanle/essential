#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string user_name;
    int num_tries;
    int num_score;
    fstream iofile("1_05.txt",ios_base::in|ios_base::app);
    if(!iofile)
        cerr << "Oops!\n";
    else{
        
        iofile << "honey" << ' ' << 8  << ' ' << 26 <<endl;
        //读取文件之前，将文件重新定位至起始处
        iofile.seekg(0);
        cout << "____________" << endl;
        iofile >> user_name >> num_tries >> num_score;
        cout << "name:" << user_name
             << "\ntries:" << num_tries
             << "\nscore:" << num_score << endl;
    }
    return 0;
}