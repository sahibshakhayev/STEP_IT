#include <iostream>
using namespace  std;

template <typename T>
struct Element
{
    T data;
    Element<T>* next;
};
template <typename T>
class MyList
{
private:
    Element<T>* head;
    Element<T>* tail;
    int count;
public:
    MyList()
    {
        head = tail = NULL;
        count = 0;
    }

    MyList(MyList& other)
    {
        this->count = other.count;
        for (auto* p = other.head; p; p = p->next)
        {
            AddToTail(p->data);
        }
    }

    MyList operator = (MyList& other)
    {
        this->count = other.count;
        for (auto* p = other.head; p; p = p->next)
        {
            AddToTail(p->data);
        }
    }









    ~MyList()
    {
        DeleteAll();
    }
    void AddToTail(T value)
    {
        Element<T>* temp = new Element<T>;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        count++;
    }
    void AddToHead(T value)
    {
        Element<T>* temp = new Element<T>;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        count++;
    }
    void AddToPosition(T value, int position)
    {

            if (position<1 || position>count)
            {
                cout << "Error!";
                exit(1);
            }

            if (position == 1) {
                Element<T>* ptr = head;
                head = new Element<T>;
                head->data = value;
                head->next = ptr;
            }

            else if (position == count) {
                Element<T>* ptr = tail;
                tail = new Element<T>;
                tail->data = value;
                tail->next = NULL;
                ptr->next = tail;
            }

            else
            {
                Element<T>* ptr = head;
                int i = 1;
                while (i < position - 1) {
                    ptr = ptr->next;
                    i++;
                }

                Element<T>* prev = ptr;
                Element<T>* next = ptr->next;
                Element<T>* cur = new Element<T>;
                prev->next = cur;
                cur->data = value;
                cur->next = next;
            }
            count++;
        
    }


    void DeleteFromHead()
    {
        if (head == nullptr)
        {
            return;
        }
        else {
            Element<T>* temp = head->next;
            delete head;
            head = temp;
            count--;
        }
    }
    void DeleteFromTail()
    {
        Element<T>* tmp = head;
        for (int i = 1; i < count - 1; i++)
            tmp = tmp->next;
        delete tmp->next;
        tmp->next = nullptr;
        count--;
    }
    void DeletefromPos(int position) {
        if (position<1 || position>count)
        {
            cout << "Error!";
            exit(1);
        }

        if (position == 1) {
            Element<T>* ptr = head;
            head = head->next;
            delete ptr;
        }

        else if (position == count) {
            int i = 1;
            Element<T>* ptr = head;
            while (i < count - 1) {
                ptr = ptr->next;
                i++;
            }
            tail = ptr;
            delete tail->next;
            tail->next = NULL;
        }
        else
        {
            Element<T>* ptr = head;
            int i = 1;
            while (i < position - 1) {
                ptr = ptr->next;
                i++;
            }

            Element<T>* prev = ptr;
            Element<T>* cur = ptr->next;
            Element<T>* next = cur->next;
            prev->next = next;
            delete cur;
        }
        count--;
    }

    void DeleteAll()
    {
        while (head != NULL)
        {
            DeleteFromHead();
        }
    }

    int Search(T elem) {
     
        Element<T>* ptr = head;

        int i = 1;

        while (ptr) {
            if (ptr->data == elem) return i;
            ptr = ptr->next;
            i++;
        }

        return NULL;


    }

    int Replase(T current, T replase) {
        int replased = 0;
        Element<T>* ptr = head;

       

        while (ptr) {
            if (ptr->data == current) { 
                ptr->data = replase;
                    replased++;
            };
            ptr = ptr->next;
        }
        if (replased == 0) {
        
            return -1;
        
        }

        return replased;

    }

    void Print()
    {
        Element<T>* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }
        cout << endl;
    }


    void reverse_list() {

        
        Element<T> *prev = nullptr;
        Element<T>* current = head;
        Element<T>* next = head->next;
                

          while (next != nullptr){
              current->next = prev;
              prev = current;
              current = next;
              next = current->next;
                }
          current->next = prev;

          head = current;
        


    }


    Element<T>* clone_list(MyList& other) {

        other.count = this->count;
        for (auto* p = this->head; p; p = p->next)
        {
            other.AddToTail(p->data);
        }
        return other.head;


    }

    Element<T>* operator + (MyList& other) {

        MyList<T> new_list;

    
        for (auto* p = this->head; p; p = p->next)
        {
            new_list.AddToTail(p->data);
        }
        for (auto* p = other.head; p; p = p->next)
        {
            new_list.AddToTail(p->data);
        }

        return new_list.head;


    }

    Element<T>* operator * (MyList& other) {

        MyList<T> new_list;


        for (auto* p = this->head; p; p = p->next)
        {
            if (other.Search(p->data) != NULL) new_list.AddToTail(p->data);
        }
        
        return new_list.head;


    }


   



};



int main() {


    MyList<int> list;

    for (int i = 1; i < 6; i++)
        list.AddToHead(i);
    list.Print();

    list.AddToHead(77);
    list.AddToTail(0);
    list.Print();

    list.DeleteFromHead();
    list.Print();

    list.DeleteFromTail();
    list.AddToPosition(777, 1);
    list.DeletefromPos(2);
    cout << list.Search(777) << endl;
    cout << list.Replase(777, 999) << endl;
    list.Print();
    list.reverse_list();
    list.Print();


    
    MyList<int> list2 = list;
    MyList <int> input;

    cout << list.clone_list(input) << endl;;
    cout << "Cloned List:" << endl;
    input.Print();
    cout << "This is list 2" << endl;
    list2.reverse_list();
    list2.Print();
    list.Print();

    MyList<int> list3;
    for (int i = 999; i < 1010; i++)
        list3.AddToHead(i);

   
    list * list3;

}

