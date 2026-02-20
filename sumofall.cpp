#include<iostream>
using namespace std;


int main()
{
int arr[] = { 1, 5, 9, 8, 6, 7};
int size = sizeof(arr)/ sizeof(int);
int sum = 0;

for(int i = 0; i<size; i++){
    sum = sum +arr[i];

       
}
               cout<<"sum of elements is "<<" "<<sum<<endl;
    return 0;
}



