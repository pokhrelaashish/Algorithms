#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> BubbleSort(vector<string> unsorted_array)
{
	int vectorSize = unsorted_array.size();
	string temp;
	for (int i = 1; i <= vectorSize-1; i++) {
		for (int j = 0; j <= vectorSize-i-1; j++) {
			if (unsorted_array[j] > unsorted_array[j+1]){
				temp = unsorted_array[j];
				unsorted_array[j] = unsorted_array[j+1];
				unsorted_array[j+1] = temp;
			}
		}
	}
	return unsorted_array;
}

int main()
{
	int names_count;
	cout << "How many names would you like to sort?: ";
	cin >> names_count;
	string name;
	vector<string> names;
	for (int i = 0; i < names_count; i++){
		cout << "Enter the name: ";
		cin >> name;
		names.push_back(name);
	}
	cout << "\n\n**** Printing unsorted array ****\n";
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << " ";
	}
	vector<string> sorted_array = BubbleSort(names);
	cout << "\n\n**** Printing sorted array ****\n";
	for (int i = 0; i < sorted_array.size(); i++) {
		cout << sorted_array[i] << " ";
	}
	return 0;
}

