#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
	
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void inc(int arr[], int size) {
	arr[0] = arr[0] + 10;

	printArray(arr, size);
}

bool find(int arr[], int size, int key) {

	//linear search

	for(int i=0; i<size; i++) {
		if(arr[i] == key) 
			return true;
	}

	//not present
	return false;
}

int main() {



	
  //array declare
  // int arr[7];
  // cout << arr << endl;
  // cout << &arr << endl;

  // cout << "Array created successfully" << endl;

//*************************************************//

  // //array initialise
  // int arr[] = {2,3,4,6,7};
  // int brr[5] = {2,4,6,8,10};
  // int crr[10] = {2,4,6,8,10};
  // //errror
  // //int drr[4] = {2,4,6,8,10};

  // cout << "Array initialised successfully" << endl;

//*******************************************************//

  // int arr[] = {1,3,5,7,9};

  // //printing all values
  // for(int index=0; index<5; index++) {
  //   cout << arr[index] << " ";
  // }

//******************************************************//

  // int n;
  // cin >> n;
  // //BAD Practice
  // int arr[n];

//************************************************//

  // //static array 
  // int arr[10000];

  // cout << "Enter the input values in array " << endl;
  // //taking input in array
  // for(int i=0; i<10; i++) {
  //   cin >> arr[i] ;
  // }

  // //printing
  // cout << "printing the values in array" << endl;
  // for(int i=0; i<10; i++) {
  //   cout << arr[i] << " ";
  //}

//***************************************************//

  // int arr[500];

  // int n;
  // cout << "How many numbers you want to add in array" << endl;

  // cin >> n;

  // cout << "Enter the numbers " << endl;
  // for(int i=0; i<n; i++) {
  //   cin >> arr[i];
  // }

  // //print doubles
  // cout << "Doubles: ";
  // for(int i=0; i<n; i++) {
  //   cout << 2 * arr[i] << " ";
  // }

//****************************************************//

	// int arr[5] = {1,3,5,7,9};

	// for(int i=0; i<5; i++) {
	// 	arr[i]  = 1;
	// }

	// for(int i=0; i<5; i++) {
	// 	cout << arr[i] << " ";
	// }

//***************************************************//

	// int arr[10] = {1,2};
	
	// for(int i=0; i<10; i++) {
	// 	cout << arr[i] << " ";
	// }


	// int arr[10] = {0};
	

	// for(int i=0; i<10; i++) {
	// 	cout << arr[i] << " " ;
	// }

//*******************************************************//

		// int arr[] = {5,6};
	// int size = 2;
	// inc(arr, size);

	// printArray(arr, size);

//*****************************************************//

	// int arr[5] = {1,3,5,7,8};
	// int size = 5;

	// cout << "Enter the key to find " << endl;
	// int key;
	// cin  >> key;

	// if(find(arr,size, key)) {
	// 	cout << "Found " << endl;
	// }
	// else {
	// 	cout << "not Found " << endl;
	// }

//****************************************************//

//memset - works with only 0 and -1 and not with any other integer values
    // int a[5];
  
    // // all elements of A are zero
    // memset(a, 0, sizeof(a));
    // for (int i = 0; i < 5; i++)
    //     cout << a[i] << " ";
    // cout << endl;
  
    // // all elements of A are -1
    // memset(a, -1, sizeof(a));
    // for (int i = 0; i < 5; i++)
    //     cout << a[i] << " ";
    // cout << endl;
  
    // // Would not work
    // memset(a, 5, sizeof(a)); // WRONG
    // for (int i = 0; i < 5; i++)
    //     cout << a[i] << " ";
	
//*************************************************//	
    // int arr[]={0,1,0,0,1,0,1,0,1,1};
    // int size=10;
    // int numzero=0;
    // int numone=0;
    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i]==0) numzero++;
    //     else
    //         numone++;
    // }
    // cout<<"Number of zeros and ones are :- "<<numzero<<" "<<numone;

//******************************************************//
// int arr[]={1,5,6,2,8,52,45};
// int size=7;
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     cout<<"Maximum Number :- "<<maxi<<endl;
//   return 0;
// }

//******************************************//

//     int arr[]={1,5,6,2,8,52,45};
//     int size=7;
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"Minimum Number :- "<<min<<endl;
//     return 0;
// }

//*******************************************//

    // int arr[]={1,5,6,2,8,52,45,47};
    // int size=8;
    // int start=0;
    // int end=size-1;
    // while(true){
    //     if(start>end){
    //         break;
    //     }
    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //         cout<<arr[start]<<" "<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }

//************************************//

    int arr[]={1,5,6,2,8,52,45,47};
    int size=8;
    int start=0;
    int end=7;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

//*******************************************//

}