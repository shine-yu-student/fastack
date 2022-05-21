#include "..\header\diy_stack.hpp"
int main(){
	diy::stack<int> st(1);
	st.pop();
	st.push(1);
	st.push(2);
}