#include<iostream>
#include<vector>

using namespace std;
int find_min(const vector<int> &list ,int i,int min){
    if(i==list.size()-1){
        return min;
    }
    if(min>list[i]){
        min = list[i];
    }
    
        return find_min(list,i+1,min);
}
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;

}
void sort_list(vector<int > &list,i)

int main(){
    vector<int > list = {10,5,6,7,3,9,4};
    int min = list[0];
    cout<<find_min(list,0,min)<<endl;

}