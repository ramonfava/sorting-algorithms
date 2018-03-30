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
	int len;
	cout << "Size array: ";
	cin >> len; 
	
	//Fill Array 
	int arr[len];
	for(int i=0; i<len; ++i){
		 arr[i] = rand() % 100 + 1;
	}
	
	print(arr, len);
	
	//BubbleSort
	for(int i=0; i<len; ++i){
		 for(int j=0; j<len-1; ++j){
		 	if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
	
	print(arr, len);
	
	return 0;
}
