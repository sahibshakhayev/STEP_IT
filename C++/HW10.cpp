#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));

#pragma region 1
	int num_ar[10]{};
	for (int i = 0; i < 10; i++)
	{
		num_ar[i] = rand() % 79 - 34;

	}

	for (int i = 0; i < 10; i++)
	{
		cout << num_ar[i] << " ";

	}
	cout << endl;
	int min = num_ar[0];
	int max = num_ar[0];
	for (int i = 0; i < 10; i++)
	{
		if (min > num_ar[i]) {

			min = num_ar[i];
		}
	
		if (max < num_ar[i]) {

			max = num_ar[i];
		}
	
	
	}

	cout << " Min: " << min << "\n" << " Max: " << max << endl;



#pragma endregion

#pragma region 2
int mas2[10]{};
int start_d{}, end_d{};
cin >> start_d >> end_d
for (int i = 0; i < 10; i++)
{
	mas2[i] = rand() % (end_d-start_d+1) + start_d;

}

for (int i = 0; i < 10; i++)
{
	cout << mas2[i] << " ";

}
cout << endl;

int user_input, sum{};
cin >> user_input;
for (int i = 0; i < 10; i++)
{
	if (mas2[i] < user_input)
	{
		sum += mas2[i];
	}



}
cout << sum << endl;







#pragma endregion

#pragma region 3
float pribil[12]{};
for (int i = 0; i < 12; i++)
{
	cout << "Vvedite pribil za " << i + 1 << " mesats: ";
	cin >> pribil[i];
}

int start{}, end{}, min_p{}, max_p{};
cin >> start >> end;
min_p = pribil[start];
max_p = pribil[start];
int min_m = start;
int max_m = start;
for (int i = start; i <= end; i++)
{
	if (min_p > pribil[i]) {

		min_m = i;
	}

	if (max_p < pribil[i]) {

	    max_m = i;
	}


}

cout << " Min: " << min_m << "\n" << " Max: " << max_m << endl;



#pragma endregion
#pragma region 4
 const int N = 20;
 int mas4[N]{ 34,-5,44,77,-67,-3,4,33,50,11,-33,1,32,-21,6,-9,76,41,-5,20 };
#pragma region 4_1
 int sum_neg{};
 for (int i = 0; i < N; i++)
 {
	 if (mas4[i] < 0)
	 {
		 sum_neg += mas4[i];
	 }


 }
 cout << sum_neg << endl;






#pragma endregion
#pragma region 4_2
 float proizv{ 1 };
 min = mas4[0];
 max = mas4[0];
 int min_i = 0;
 int max_i = 0;

 for (int i = 0; i < N; i++)
 {
	 if (min > mas4[i]) {

		 min = mas4[i];
		 min_i = i;
	 }

	 if (max < mas4[i]) {

		 max = mas4[i];
		 max_i = i;

	 }


 }

 for (int i = min_i; i < max_i; i++)
 {
	 proizv *= mas4[i];


 }

 cout << proizv  << endl;
#pragma endregion
#pragma region 4_3
 int proizv2{ 1 };
 for (int i = 0; i < N; i++)
 {
	 if (i % 2 == 0) {

		 proizv2 *= mas4[i];

	}

}

 cout << proizv2 << endl;


#pragma endregion
#pragma region 4_4
 int start_min{}, end_min{}, sum_n{};
 for (int i = 0; i < N; i++)
 {
	 if (mas4[i] < 0)
	 {
		 start_min = i;
		 break;
	 }
 }

 for (int i = 0; i < N; i++)
 {
	 if (mas4[i] < 0)
	 {
		 end_min = i;
		 
	 }
 }

 for (int i = start_min+1; i < end_min; i++)
 {

	 sum_n += mas4[i];


 }

 cout << sum_n << endl;

#pragma endregion





#pragma endregion






}