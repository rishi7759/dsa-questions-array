#include<iostream>
#include<climits>
using namespace std;

int main()
{
int nums[5] = {5, 4, 9, 6, 8};
int size = sizeof(nums)/sizeof(int);
int smallest = INT_MAX ;

   for(int i = 0; i<size; i++){
    if(nums[i]< smallest){
        smallest = nums[i];
    }
}
cout<<"smallest" <<" "<<smallest<<endl ;

    return 0;
}