#include "..\header\diy_stack.hpp"
#include<stack>
#include<time.h>
using namespace std;
const int N=1e6;
int main(){
	diy::stack<int> st1(N);
	stack<int> st2;
	clock_t s,e;

	s=clock();
	for(int i=1;i<=N;i++)st1.push(i);
	cout<<st1.size()<<'\n';
	for(int i=1;i<=N;i++)/*cout<<st1.top()<<' ',*/st1.pop();
	cout<<st1.empty()<<'\n';
	e=clock();
	cout<<e-s<<'\n';

	s=clock();
	for(int i=1;i<=N;i++)st2.push(i);
	cout<<st2.size()<<'\n';
	for(int i=1;i<=N;i++)/*cout<<st2.top()<<' ',*/st2.pop();
	cout<<st2.empty()<<'\n';
	e=clock();
	cout<<e-s<<'\n';
}