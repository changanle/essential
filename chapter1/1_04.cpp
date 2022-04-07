#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
    // string user_name;
    // int val = 0;
    // int num_tries = 0;
    // int num_right(0);
    // double user_score = 0.0;
    // char user_rsp;
    // bool user_more = true;

    // const int max_tries = 3;
    const int seq_cnt = 6;
    vector<int> fibonacci,lucas,pell,triangular,square,pentangonal;
    vector<int> *pv = 0;
    vector<int> *seq_addrs[seq_cnt] = {
        &fibonacci,&lucas,&pell,&triangular,&square,&pentangonal
    };
    vector<int> *current_vec = 0;
    srand(seq_cnt);
    int seq_index = rand() % seq_cnt;
    current_vec = seq_addrs[seq_index];

    return 0;
}