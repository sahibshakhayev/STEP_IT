#include<iostream>
using namespace std;
struct client
{
	char name[50];
	int prior;
	int time;
	client* next, * prev;
};

class printer
{
	client* head, * tail;
public:
	printer()
	{
		head = tail = NULL;
	}
	printer(const printer& ob)
	{

	}

	int push(char* str, int prior, int time);

	void show();
};
int printer::push(char* str, int prior, int time)
{
	client* new_cell = new client;
	strcpy_s(new_cell->name, str);
	new_cell->prior = prior;
	new_cell->time = time;
	if (head == NULL)
	{
		new_cell->next = NULL;
		new_cell->prev = NULL;
		head = tail = new_cell;
		return 1;
	}
	if (head != NULL && head->prior > new_cell->prior)
	{
		new_cell->next = head;
		head->prev = new_cell;
		new_cell->prev = NULL;
		new_cell = head;
		return 1;
	}
	if (head != NULL && tail->prior <= new_cell->prior)
	{
		new_cell->next = NULL;
		new_cell->prev = tail;
		tail->next = new_cell;
		tail = new_cell;

		return 1;
	}
	if (tail->prior > new_cell->prior)
	{
		client* after_me = tail;
		while (after_me != head && after_me->prior > new_cell->prior)
		{
			after_me = after_me->prev;
		}
		new_cell->next = after_me->next;
		after_me->next = new_cell;
		after_me->next->prev = new_cell;
		new_cell->prev = after_me;
		return 1;
	}
}

void printer::show()
{
	client* tmp = head;
	while (tmp)
	{
		cout << " Name : " << tmp->name << endl;
		cout << " Time : " << tmp->time << endl;
		tmp = tmp->next;
		cout << endl;
	}
}
int main()
{
	char name[50];
	int time;
	int prior;
	int menu;
	printer ob;
	do
	{
		system("cls");
		cout << " 1 - Add Client \n";
		cout << " 2 - Print Statistics \n";
		cout << " 0 - Exit\n";
		cout << " Select variant : ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << " Enter name : ";
			getchar();
			gets_s(name, 128);
			cout << " Enter priority (1,2,3) : ";
			cin >> prior;
			cout << " Enter time (min): ";
			cin >> time;
			ob.push(name, prior, time);
			break;
		case 2:
			system("cls");
			cout << " All clients:  \n";
			ob.show();
			system("pause");
			break;

		case 0:
			cout << " Bye ! \n";
			break;
		}

	} while (menu != 0);
	system("pause");
	return 1;
}
