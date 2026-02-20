#include<iostream>
#include<climits>             // waha jo int min declare kiya hai uske liya yea header file use kiya hai 
using namespace std;

int main()
{
int nums[5] = {5, 4, 9, 16, 8};
int size = sizeof(nums)/sizeof(int);
int largest = INT_MIN ;

   for(int i = 0; i<size; i++){
    if(nums[i]> largest){
        largest = nums[i];
    }
}
cout<<"largest is " <<" "<< largest <<endl ;

    return 0;
}