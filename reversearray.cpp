#include<iostream>
using namespace std;

void reverseARRAY(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
            start++;
            end--;
        
    }
}

int main()
{
     int arr[] ={ 1, 5, 9, 6, 7};
     int size = sizeof(arr)/ sizeof(int);

     reverseARRAY(arr, size);

     for(int i = 0; i<size; i++){
        
        cout<<arr[i]<<" ";
     }

     cout<<endl;
     
    return 0;
}