#ifndef single_h
#define single_h

#include<iostream>
using namespace std;
struct sll{
	int val;
	sll *next;
	sll(int n)
	{
		val = n;
		next = nullptr;
	}
};

struct s_linked{
	sll* node = nullptr;
	void insert_head(int n)
	{
		node = push_head(n,node);
	}
	sll* push_head(int n,sll* node)
	{
		sll* newy = new sll(n);
		if(node == nullptr) return newy;
		newy -> next = node;
		return newy;	
	}
	void insert_position(int n,int p)
	{
		node = push_posi(n,p,node);
	}
	sll* push_posi(int n,int p,sll* node)
	{
		if(p == 1) return push_head(n,node);
		int k = 1;
		sll* prev = nullptr;
		sll* curr = node;
		while(curr != nullptr && k < p)
		{
			prev = curr;
			curr = curr -> next;
			k++;
		}
		sll* newy = new sll(n);
		prev -> next = newy;
		newy -> next = curr;
		return node; 
	}
	void insert_end(int n)
	{
		node = push_end(n,node);
	}
	sll* push_end(int n,sll* node)
	{
		if(node == nullptr) return push_head(n,node);
		sll* curr = node;
		while(curr -> next != nullptr)
		{
			curr = curr -> next;
		}
		sll* newy = new sll(n);
		curr -> next = newy;
		return node;
	}
	void delete_head()
	{
		node = pop(node);
	}
	sll* pop(sll* node)
	{
		if(node == nullptr || node -> next == nullptr) return nullptr;
		sll* temp = node;
		node = node -> next;
		delete temp;
		return node;
	}
	void delete_position(int p)
	{
		node = pop_posi(p,node);
	}
	sll* pop_posi(int p,sll* node)
	{
		if(node == nullptr) return nullptr;
		if(p <= 1) return pop(node);
		int k = 1;
		sll* prev = nullptr;
		sll* curr = node;
		while(curr != nullptr && k < p)
		{
			prev = curr;
			curr = curr -> next;
			k++;
		}
		if(curr == nullptr || curr -> next == nullptr) return node;
		sll* to_delete = curr -> next;
		curr -> next = curr -> next -> next;
		delete to_delete;
		return node;
	}
	void delete_end()
	{
		node = pop_end(node);
	}
	sll* pop_end(sll* node)
	{
		if(node == nullptr) return nullptr;
		if(node -> next == nullptr)
		{
			delete node;
			return nullptr;
		}
		sll* curr = node;
		while(curr -> next -> next != nullptr) curr = curr -> next;
		delete curr -> next;
		curr -> next = nullptr;
		return node;
	}
	void display()
	{
		if(node == nullptr) return;
		sll* curr = node;
		while(curr != nullptr)
		{
			cout << curr -> val << " ";
			curr = curr -> next;
		}
		cout << "\n";
    }
    void search(int k)
    {
    	if(node == nullptr) return;
    	sll* curr = node;
    	bool flag = true;
    	while(curr != nullptr)
    	{
    		if(curr -> val == k)
    		{
    			cout << "Found in linked list\n";
    			return;
			}
			curr = curr -> next;
		}
		if(flag == false) cout << "Not found\n";
	}
};

#endif
