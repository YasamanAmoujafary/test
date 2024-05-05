#include<iostream>
#include<vector>
using namespace std;

int fact(int n){
    if(n<=0){
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
   int x= fact(5);
    int y=fact(6);
    cout<<x<<endl<<y<<endl;

}