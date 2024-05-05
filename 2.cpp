#include<iostream>
#include<vector>
using namespace std;

int sumList(vector<int> &list, int sum){
    if(list.size() ==0){
        return sum;
    }
    sum += list[list.size()-1];
    list.pop_back();
    return sumList(list,sum);
}


int main(){
    int number;
    int sum =0;
    vector<int > list;
    while(cin >>number){
        list.push_back(number);

    }
    int x=sumList(list,sum);
    cout<<x<<endl;
}