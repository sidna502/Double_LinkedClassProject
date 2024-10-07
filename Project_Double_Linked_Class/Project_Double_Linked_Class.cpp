#include <iostream>
#include "clsDblLinkedLinst.h"


int main()
{
	system("color 5f");
	clsDblLinkedList<int> MyDblLinkedList;
	
	MyDblLinkedList.InsertAtBeginning(5);
	MyDblLinkedList.InsertAtBeginning(4);
	MyDblLinkedList.InsertAtBeginning(3);
	MyDblLinkedList.InsertAtBeginning(2);
	MyDblLinkedList.InsertAtBeginning(1);
	cout << "Linked list content:\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.InsertAfter(1, 500);
	cout << "After ineerting:\n";
	MyDblLinkedList.PrintList();


	//clsDblLinkedList<int> ::Node* N = MyDblLinkedList.GetNode(2);

	//cout << "\nNode value= " << N->value << endl;

	//cout << "\nGet item 2 value= " << MyDblLinkedList.GetItem(2) << endl;
	//MyDblLinkedList.UpdateItem(2, 500);
	//MyDblLinkedList.PrintList();
	
	
	
	/*MyDblLinkedList.Reverse();
	cout << "\nLinked list content after reverse:\n";
	MyDblLinkedList.PrintList();


	cout << "\nNumber of items in the linked list= " << MyDblLinkedList.Size() << endl;
	if (MyDblLinkedList.IsEmpty())
		cout << "\nYes, List is empty\n";
	else
		cout << "\nNo, List is not empty\n";*/
	//MyDblLinkedList.Clear();
	
	/*clsDblLinkedList <int>::Node* N1 = MyDblLinkedList.Find(2);
	if (N1 != NULL)
		cout << "\nNode with value 2 is found :-)\n";
	else
		cout << "\nNode is not found :-)\n";
	
	MyDblLinkedList.InsertAfter(N1, 500);
	cout << "\nAfter inserting 500 afer 2:\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.InsertAtEnd(700);
	cout << "\nAfter inserting 700 at end:\n";
	MyDblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(1);
	MyDblLinkedList.DeleteNode(N2);
	cout << "\nAfter deleting 4:\n";
	MyDblLinkedList.PrintList();
	MyDblLinkedList.DeleteFirstNode();
	cout << "\nAfter deleting first node:\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.deleteLastNode();
	cout << "\nAfter deleting last node:\n";
	MyDblLinkedList.PrintList();*/
	system("pause > 0");
}
