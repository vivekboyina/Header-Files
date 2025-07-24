#include "stack1.h"
#include <iostream>
int main()
{
	stack ans;
	ans.push(1);
	ans.push(2);
	ans.push(3);
	ans.push(4);
	ans.display();
	ans.pop();
	ans.display();
	std::cout << ans.top() << "\n";
	ans.display();
}
