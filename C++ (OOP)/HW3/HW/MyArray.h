#pragma once
template <typename T>
class MyArray
{
public:
	MyArray() {

		size = 77;
		arr = new T[size];

	};
	MyArray(int size) {
		this->size = size;
		arr = new T[this->size];

	};

	~MyArray() {

		delete[] arr;

	};
	int GetSize() {
		return this->size;
    }
	void SetSize(int size, int grow = 1) {

        if (size == this->size) {
            return;
        }

        this->size = size+grow;
		T* tmp = new T[this->size];
		for (int i = 0; i < this->count; i++)
		{
			tmp[i] = arr[i];
		}

		delete[] this->arr;
		arr = tmp;

       


	 }


	int GetUpperBound() {

		return this->count - 1;
	}

	bool IsEmpty() {
		if (this->count == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
    }

	void FreeExtra() {
		if (this->count < this->size)
		{
			T* tmp = new T[this->count];
			for (int i = 0; i < this->count; i++)
			{
				tmp[i] = arr[i];
			}
			delete[] arr;
			arr = tmp;
			this->size = this->count;
		}


	}
	void RemoveAll() {
		delete[] arr;
		arr = nullptr;
		size = 0;
		count = 0;
    }

	T GetAt(int index) {

		if (index >= 0 && index < this->count) return arr[index];


	}

	void SetAt(int index, T data)
	{
		if (index >= 0 && index < this->size)
		{
			arr[index] = data;
			this->count = index + 1;
		}
	}

	T& operator[](int index)
	{
		if (index >= 0 && index < this->count) return arr[index];
	}


	void Add(T data)
	{
		if (this->count < this->size)
		{
			arr[this->count++] = data;
		}
		else if (this->count >= this->size)
		{
			SetSize(this->size + 1);
			arr[this->size - 1] = data;
			this->count++;
		}
	}

	void Append(MyArray& obj) {
		
		T* tmp = new T[this->size + obj->count];
		for (int i = 0; i < this->count; i++)
		{
			tmp[i] = arr[i];
		}
		for (int i = this->count; i < this->size + obj->count; i++)
		{
			tmp[i] = obj.arr[i];
		}
		delete[] arr;
		this->count += obj.count;
		this->size += obj.count;
	}

	MyArray<T>& operator= (const MyArray& obj)
	{
		if (this == &obj) return *this;

	
		this->count = obj.count;
		this->size = obj.size;

		
		arr = new T[this->size];

		for (int i = 0; i < this->count; i++)
		{
			arr[i] = obj.arr[i];
		}

		return *this;
	}
	T** GetData()
	{
		return &arr;
	}

	void InsertAt(int position, T data)
	{
		if (position < 0 || position >= this->count)
		{
			return;
		}

		if (this->count >= this->size)
		{
			SetSize(this->size + 1);
		}

		for (int i = this->count; i >= position; i--)
		{
			arr[i] = arr[i - 1];
		}

		arr[position] = data;
		this->count++;
	}
    
	void RemoveAt(int position)
	{
		if (position < 0 || position >= this->count)
		{
			return;
		}

		for (int i = position; i < this->count; i++)
		{
			arr[i] = arr[i + 1];
		}

		this->count--;
	}

private:
	int size{};
	int count{};
    T* arr;
};


