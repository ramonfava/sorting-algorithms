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

void swap (int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	//Generate Random Numbers 
	srand (time(NULL));
	int len, min_idx;
	cout << "Size array: ";
	cin >> len; 
	
	//Fill Array 
	int arr[len];
	for(int i=0; i<len; ++i){
		 arr[i] = rand() % 100 + 1;
	}
	
	print(arr, len);
	
	//SelectionSort
	for(int i=0; i<len; ++i){
		min_idx = i;
		for(int j=i; j<len; ++j){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		swap(&arr[i], &arr[min_idx]);
	}
	
	print(arr, len);
	
	return 0;
}
