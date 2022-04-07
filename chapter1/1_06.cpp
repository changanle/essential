#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //<读出>
    string user_name = "aaa";
    int num_tries;
    int num_score;

    //以读取模式（input mode）打开infile
    ifstream infile("1_05.txt");
    if(!infile){
        cerr << "由于某种原因，文件无法打开。。。";
    }else{
        string name;
        while( infile >> name){
            infile >> num_tries >> num_score;
            //if( name == user_name ){
                cout << "name:" << name
                     << "\ntries:" << num_tries
                     << "\nscore:" << num_score << endl;
            //}
        }
        
        
        
        
    }


    return 0;
}

