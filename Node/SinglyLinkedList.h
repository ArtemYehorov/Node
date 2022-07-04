#include <iostream>
using namespace std;
#pragma once


class SinglyLinkedList
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
	};

	~SinglyLinkedList();

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;

public:
	void AddToHead(int data);
	void AddToTail(int data);
	void InsertInto(int data, int position);

	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteByIndex(int position);
	void Clear();

	void Print() const;
	int GetCount() const;
	int IndexOf(int data) const;
};


