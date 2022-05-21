#include<iostream>
#include<algorithm>
using std::cout;
using std::clog;
using std::sort;
namespace diy{
	template<typename _Tp>
	class stack{
		private:
		size_t _max_size;
		_Tp* _st;
		size_t _tpos=0;
		public:
		stack():_max_size(1e3){
			_st=new _Tp[_max_size+1];
		}
		stack(size_t mx_s):_max_size(mx_s){
			_st=new _Tp[_max_size+1];
		}
		stack(stack<_Tp>& tmp){
			_tpos=0;
			while(!tmp.empty()){
				this->push(tmp.top());
				tmp.pop();
			}
		}
		~stack(){
			delete[] _st;
			_st=nullptr;
		}
		void push(const _Tp &tmp){
			if(_tpos==_max_size){
				clog<<"[Overflow] The stack is full now."<<'\n';
				return;
			}
			_tpos++,_st[_tpos]=tmp;
		}
		void push(_Tp &&tmp){
			if(_tpos==_max_size){
				clog<<"[Overflow] The stack is full now."<<'\n';
				return;
			}
			_tpos++,_st[_tpos]=tmp;
		}
		void sort(){
			sort(_st,_st+_max_size);
		}
		void pop(){
			if(!_tpos){
				clog<<"[underflow] The stack is empty now."<<'\n';
				return;
			}
			_tpos--;
		}
		_Tp top(){
			return _st[_tpos];
		}
		size_t size(){
			return _tpos;
		}
		bool empty(){
			return !_tpos;
		};
		void alloc(size_t size){
			delete[] _st;
			_st=new _Tp[_max_size+1];
		}
	};
}
