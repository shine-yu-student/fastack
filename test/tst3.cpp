#include<iostream>
#include<cmath>
#include<thread>
#include "..\header\diy_stack.hpp"
using namespace std;
diy::stack<int> st(1e5),st2(1e5);
void check(int s,int e,int src){
    for(int i=s;i<=e;i++){
        if(src%i==0){
            st.push(i);
		}
    }
}
int main() {
    int n=10000;
    //cin>>n;
    int p=ceil(n/20.0);
    thread a[p];
    for(int i=0;i<p;i++){
        a[i]=thread(check,i*10+1,(i+1)*10,n);
    }
    for(int i=1;i<=p;i++){
        a[i-1].join();
    }
}