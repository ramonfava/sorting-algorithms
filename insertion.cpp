#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

//Print Array
void print (int arr[], int& len) {
	for(int i=0; i<len; ++i){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main(){
	//Generate Random Numbers 
	srand (time(NULL));
	int len, min, max, temp;
	bool flag = false;
	cout << "Size array: ";
	cin >> len; 
	
	//Fill Array 
	int arr[len];
	for(int i=0; i<len; ++i){
		 arr[i] = rand() % 100 + 1;
	}
	
	print(arr, len);
	
	//InsertionSort
	for(int i=1; i<len; ++i){
		
		for(int j=0; j<i; ++j){
			if(arr[i] < arr[j]){
				flag = true;
				min = j;
				max = i;
				temp = arr[i];
				break;
			}
		}
		if(flag){
			for(int j=max; j>min; --j){
				arr[j]=arr[j-1];
			}
			arr[min]=temp;
		}
		cout << "Arr: ";
		print(arr, len);
		flag = false;
	}
	
	print(arr, len);
	
	return 0;
}
//