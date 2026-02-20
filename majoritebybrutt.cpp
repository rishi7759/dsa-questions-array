
// majority element 

#include<iostream>
using namespace std;
int main() 
{
     int arr[] = { 1,1,2,2,1,1};
     int size = sizeof(arr)/ sizeof(int);

     int n = size;

     for(int i = 0; i<size; i++){
        int freq = 0;

        for( int j = i; j<size; j++){
            if(arr[j] == arr[i]) {
                freq++;
            }
        }
        if(freq > n/2){
            cout<<"majority element"<< " " <<arr[i] <<endl;
        }
     }

    return 0;
}