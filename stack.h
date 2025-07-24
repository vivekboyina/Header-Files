#ifndef stack_h
#define stack_h

#include <iostream>
#include <vector>
using namespace std;

struct stack{
	vector<int>stk;
	void push(int n)
	{
		stk.push_back(n);
	}
	void pop()
	{
		stk.pop_back();
	}
	int size()
	{
		return stk.size();
	}
	int top()
	{
		if(stk.empty()) return -1;
		return stk.back(); 
    }
    bool isempty()
    {
    	return stk.empty();
	}
	void display()
	{
		for(int i = stk.size() - 1; i >= 0; i--) cout << stk[i] << " ";
		cout << "\n";
	}
};

#endif
