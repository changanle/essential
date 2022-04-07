#include <iostream>
#include <vector>
using namespace std;
int main(){
    const int seq_size = 18;
    vector<int> pel_seq(seq_size); 
    pel_seq[0] = 1;
    pel_seq[1] = 2;
    for(int index = 0;index < seq_size;index++){
        pel_seq[index] = 2*pel_seq[index-1] + pel_seq[index-2];
    }
    cout <<"The first"<<pel_seq.size()<<"element of the pell series:";
    for(int index = 0;index<seq_size;index++){
        cout<<pel_seq[index]<<" ";

    }
    cout << endl;
    return 0;
}