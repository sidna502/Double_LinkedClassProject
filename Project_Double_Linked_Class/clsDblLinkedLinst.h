#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{
protected:
	int _Size = 0;
	
public:
	
	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};
	Node* Head = NULL;
	void InsertAtBeginning(T value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->prev = NULL;
		newNode->next = Head;
		if (Head != NULL) Head->prev = newNode;
		Head = newNode;
		_Size++;
	}
	void PrintList()
	{
		Node* Current = Head;
		cout << "NULL <--> ";
		while (Current != NULL)
		{
			cout << Current->value << " <--> ";
			Current = Current->next;
		}
		cout << "NULL\n";
	}
	Node* Find(T value)
	{
		Node* Current = Head;
		/*while (Current != NULL && Current->value != value)
		{
			Current = Current->next;
		}
		return Current;*/
		while (Current != NULL)
		{
			if (Current->value == value) return Current;
			Current = Current->next;
		}
		return NULL;
	}
	void InsertAfter(Node* &Current, T value)
	{
		Node* newNode = new Node;
		newNode->value = value;
		newNode->prev = Current;
		newNode->next = Current->next;
		if (Current->next != NULL) Current->next->prev = newNode;
		Current->next = newNode;
		_Size++;
	}
	void InsertAtEnd(T value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;
		if (Head->next == NULL)
		{
			newNode->prev = Head;
			Head = newNode;
			_Size++;
			return;
		}
		else
		{
			Node* LastNode = Head;
			while (LastNode->next != NULL)
			{
				LastNode = LastNode->next;
			}
			LastNode->next = newNode;
			newNode->prev = LastNode;
		}
		_Size++;
		
	}
	void DeleteNode(Node* Current)
	{
		if (Current == NULL || Head == NULL) return;
		if (Head == Current)
		{
			Head = Current->next;
			delete Current;
			_Size--;
			return;
		}
		if (Current->next != NULL) Current->next->prev = Current->prev;
		if (Current->prev != NULL) Current->prev->next = Current->next;
		delete Current;
		_Size--;

	}
	void DeleteFirstNode()
	{
		Node* Current = Head;
		Head = Head->next;
		if (Head != NULL) Head->prev = NULL;
		delete Current;
		_Size--;

	}
	void deleteLastNode()
	{
		Node* Current = Head;
		if (Current == NULL) return;
		if (Current->next == NULL)
		{
			delete Current;
			Current = NULL;
			_Size--;
			return;
		}
		while (Current->next->next != NULL)
		{
			Current = Current->next;
		}
		Node* temp = Current->next;
		Current->next = NULL;
		delete temp;
		_Size--;
	}
	int Size()
	{
		return _Size;
	}
	bool IsEmpty()
	{

		return (_Size == 0 ? true : false);
		//return !_Size;
		//return _Size == 0;
	}
	void Clear()
	{
		while (_Size > 0)
		{
			DeleteFirstNode();
		}
		
	}
	void Reverse()
	{
		Node* Current = Head;
		Node* temp = nullptr;
		while (Current != nullptr)
		{
			temp = Current->prev;
			Current->prev = Current->next;
			Current->next = temp;
			Current = Current->prev;
		}
		if (temp != nullptr)
		{
			Head = temp->prev;
		}
	}
	Node* GetNode(int index)
	{
		if (index < 0 || index >= _Size) return NULL;
		Node* Current = Head;
		int Count = 0;
		while (Current != nullptr && Current->next != nullptr)
		{
			if (Count == index) break;
			Current = Current->next;
			Count++;
		}
		return Current;
	}
	T GetItem(T index)
	{
		//return GetNode(index) ? GetNode(index)->value : NULL;
		//Node* ItemNode = GetNode(index);
		return (GetNode(index) != NULL) ? GetNode(index)->value : NULL;
	}
	bool UpdateItem(T index, T NewValue)
	{
		Node* ItemNode = GetNode(index);
		if (ItemNode != NULL)
		{
			ItemNode->value = NewValue;
			return true;
		}
		else
			return false;
	}
	bool InsertAfter(T index, T NewValue)
	{
		Node* ItemNode = GetNode(index);
		if (ItemNode != NULL)
		{
			InsertAfter(ItemNode, NewValue);
			return true;
		}
		else
			return false;
	}
};


