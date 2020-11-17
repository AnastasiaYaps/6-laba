#include<iostream>
using namespace std;
template<class T>
class stack
{
private:
	struct FILO
	{
		T data;
		FILO* next;
	};

	FILO* head;
	FILO* list;
	FILO* tail;
	FILO* top;

public:
	stack() {
		head = nullptr;
		list = nullptr;
		tail = nullptr;
		top = nullptr;
	}
	void AddToStart()
	{
		FILO* p = new FILO();
		p->data = rand();
		p->next = top;
		top = p;
	}
	struct FILO* create(struct FILO* head, int x) {// ввод
		struct FILO* n;    // указатель на новую структуру
		FILO* n = new FILO();
		n->next = head;
		n->data = x;
		return n;
	}
	void Display()
	{
		FILO* p;
		if (top != NULL)
		{
			p = top;
			while (p != NULL)
			{
				cout << p->data;
				p = p->next;
				cout << endl;
			}
		}
	}
	void Delete()
	{
		FILO* p;
		if (top != NULL)
		{
			p = top;
			top = top->next;
			free(p);
		}
	}
	void find_element() {
		FILO* p;
		int fl = 1;
		T element;
		cout << "input element" << endl;
		cin >> element;
		if (top != NULL)
		{
			p = top;
			while (p != NULL)
			{
				if (element == p->data) {
					cout << "its element in stack" << endl;
					cout << p->data << endl;
				}

				p = p->next;
				cout << endl;
			}
		}

	}
};
template <class T>
void menu(stack<T>& st) {
	int element;
	int choice;
	do {
		cout << "input 1-input" << endl << "2-output" << endl << "3-delete" << endl << "4-find element" << endl << "8-end" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			st.AddToStart();
			break;
		case 2:
			st.Display();
			break;
		case 3:
			st.Delete();
			break;
		case 4:
			st.find_element();
			break;
		case 5:
			break;
		case 8: return;
		}


	} while (1);
}


 int main() {
	stack<int> st1;
	menu(st1);

	return 0;
}
//1+ 2+ 3 4 5 6 7 +