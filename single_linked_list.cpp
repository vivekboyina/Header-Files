#include "single.h"
int main()
{
	s_linked ll;
	ll.insert_head(1);
	ll.insert_end(2);
	ll.insert_end(3);
	ll.insert_end(4);
	ll.insert_head(11);
	ll.insert_position(5,5);
	ll.display();
	ll.search(4);
	ll.delete_head();
	ll.delete_position(3);
	ll.delete_end();
	ll.display();
}
