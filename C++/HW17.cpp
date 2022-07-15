#include <iostream>
using namespace std;
void sum_proiz(int* arr, int len, int* sum, int* proiz);
void couter(int* arr, int len, int* pos, int* negativ, int* zero);
void filtrate(int* arr, int len, int* pos_ar, int* negative_arr, int* zero_ar);
int* delete_negativ(int* arr, int len);
int* create_dyn_memory();
int* init_dyn_ar(int size);
void print(int* arr, int length);
void delete_arr(int* arr);
int* push_back(int* arr, int& length, int e);
int* push_index(int* arr, int& length, int e, int index);
int* delete_index(int* arr, int& length, int index);
int* push_back_block(int* arr, int& length, int* block, int block_size);
int* push_index_block(int* arr, int& length, int* block, int block_size, int start_index);
int* delete_block(int* arr, int& length, int block_size, int start_index);
int main()
{
	int sum{}, proiz{1};
	int arr[7]{ 32,47,-5,44,-4,0,0};
	print(arr, 7);
	sum_proiz(arr, 7,&sum, &proiz);
	cout << "Summa i proizvedeniye elementov: " << endl;
	cout << sum << " " << proiz << endl;
	cout << "Kolicestvo polojitelnix, otrisatelnix i nulevix elementov: " << endl;
	int pos{}, negativ{}, zero{};
	couter(arr, 7, &pos, &negativ, &zero);
    cout << pos << " " << negativ << " " << zero << endl;
	int* pos_arr = new int[pos];  int* negativ_arr = new int[negativ]; int* zero_arr = new int[zero];
	filtrate(arr, 7,pos_arr, negativ_arr,zero_arr);
	cout << "Otdelniye dinamicheckiye massivi:  " << endl;
	print(pos_arr, pos);
	print(negativ_arr, negativ);
	print(zero_arr, zero);
	cout << "Massiv 'numbers' : " << endl;
	int* numbers = new int[10]{12,-55,33,99,12,4,56,-9,-4,10};
	print(numbers, 10);
	cout << "Udaleniye otrisatelnix:  " << endl;
	int* new_numbers = delete_negativ(numbers, 10);
	pos = 0, zero = 0;
	couter(numbers, 10, &pos, &negativ, &zero);
	print(new_numbers, pos + zero);
	int* a = create_dyn_memory();
	int* d_arr = init_dyn_ar(5);
	delete_arr(d_arr);
	cout << "Pecat massiva:  " << endl;
	int size = 10;
	print(numbers, size);
	cout << "Dobavleniye konec massiva (45):  " << endl;
	int *new_arr = push_back(numbers, size, 45);
	print(new_arr, size);
	cout << "Dobavleniye v index massiva (77, index: 3):  " << endl;
	int *push_in = push_index(new_arr, size, 77, 3);
	print(push_in, size);
	cout << "Udaleniye elementa po indeksu (99, index: 4):  " << endl;
	int* delete_arr = delete_index(push_in, size, 4);
	print(delete_arr, size);
	int block[5] = { 65,9,12,17,3 };
	cout << "Dobavleniye bloka v konec (block):  " << endl;
	int* block_arr = push_back_block(delete_arr, size, block, 5);
	print(block_arr, size);
	cout << "Dobavleniye bloka v index (block,index:2):  " << endl;
	int* index_block_arr = push_index_block(block_arr, size, block, 5, 2);
	print(index_block_arr, size);
	cout << "Udaleniye bloka po indeksu (block,index:3, 5-elementov):  " << endl;
	int* deleted_block_arr = delete_block(index_block_arr, size, 3, 5);
	print(deleted_block_arr, size);
}

void sum_proiz(int* arr, int len, int* sum, int* proiz) {


	for (int i = 0; i < len; i++)
	{
		*sum += arr[i];
		*proiz *= arr[i];

	}







}
void couter(int* arr, int len, int* pos, int* negativ, int* zero) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > 0) {

			*pos += 1;

		}
		else if (arr[i] == 0) {

			*zero += 1;

		}

		else {

			*negativ += 1;
		}

	}



}
void filtrate(int* arr, int len, int* pos_ar, int* negative_arr, int*  zero_ar) {
	int pos_len{}, n_len{}, z_len{};
	couter(arr, len, &pos_len, &n_len, &z_len);
	int pos_index{}, neg_index{}, zero_index{};
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > 0) {
			pos_ar[pos_index] = arr[i];
			pos_index++;
		}

		else if (arr[i] == 0) {
			zero_ar[zero_index] = arr[i];
			zero_index++;
		}

		else {
			negative_arr[neg_index] = arr[i];
			neg_index++;
		}

	}


	
	

	

}
int* delete_negativ(int* arr, int len) {
	int pos{}, neg{}, zero{};
	couter(arr, len, &pos, &neg, &zero);
	int* tmp = new int[pos+zero]{};
	int index{};
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= 0) {

			tmp[index] = arr[i];
			index++;

		}


		
	}

	

	return tmp;


}
int* create_dyn_memory() {
	int* el = new int;
	return el;
}
int* init_dyn_ar(int size) {
	int* arr = new int[size];
	return arr;
}
void print(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}
void delete_arr(int* arr) {
	delete[] arr;
	arr = nullptr;



}
int* push_back(int* arr, int& length, int e)
{
	int* tmp = new int[length + 1];
	for (int i = 0; i < length; i++)
	{
		tmp[i] = arr[i];
	}
	delete[] arr;
	tmp[length] = e;
	length++;
	return tmp;
}
int* push_index(int* arr, int& length, int e, int index) {
	int* tmp = new int[length + 1];
	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[index] = e;
	for (int i = index+1; i <= length+1; i++)
	{
		tmp[i] = arr[i-1];
	}
    
	delete[] arr;
	
	length++;
	return tmp;
}
int* delete_index(int* arr, int& length, int index) {
	int* tmp = new int[length - 1];
	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	for (int i = index; i <= length + 1; i++)
	{
		tmp[i] = arr[i+1];
	}

	delete[] arr;

	length--;
	return tmp;



}
int* push_back_block(int* arr, int& length, int* block, int block_size) {
	int* tmp = new int[length + block_size];
	for (int i = 0; i < length; i++)
	{
		tmp[i] = arr[i];
	}
	int index = 0;
	for (int i = length; i < length+block_size; i++)
	{
		tmp[i] = block[index];
		index++;
	}



	delete[] arr;
	length+=block_size;
	return tmp;




}
int* push_index_block(int* arr, int& length, int* block, int block_size, int start_index) {
	int* tmp = new int[length + block_size];
	for (int i = 0; i <start_index; i++)
	{
		tmp[i] = arr[i];
	}
	int index = 0;
	for (int i = start_index; i < start_index+block_size; i++)
	{
		tmp[i] = block[index];
		index++;
	}
	for (int i = start_index+block_size; i <= length+block_size; i++)
	{
		tmp[i] = arr[i-block_size];
		index++;
	}
	
	delete[] arr;
	length += block_size;
	return tmp;
}
int* delete_block(int* arr, int& length, int start_index, int block_size) {

	int* tmp = new int[length - block_size];
	for (int i = 0; i < start_index; i++)
	{
		tmp[i] = arr[i];
	}
	
	for (int i = start_index; i <= length + block_size; i++)
	{
		tmp[i] = arr[i + block_size];
	}


	delete[] arr;

	length -=block_size;
	return tmp;


}
