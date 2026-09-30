#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
}
void swap(int x,int y){
    int t=x;
    x=y;
    y=t;
}
   

