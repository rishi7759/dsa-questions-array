#include<iostream>
using namespace std;


int main()
{
int arr[] = {1,7,2,3};
int size = sizeof(int)/ sizeof(int);

int target = 9;

for(int i= 0; i<size; i++){
    for(int j = i+1; j<size; j++){

        if(arr[i] + arr[j] == target){

            // cout<<arr[i,j]<<endl;

             cout<<"pair found"<<arr[i]<<" +"<<arr[j]<<" = "<<target<<endl;
        }
    }
}

    return 0;
}
// iska output nhi aa rha hai 