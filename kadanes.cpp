#include<iostream>
#include<climits>
using namespace std;

int main()
{
int arr[] = { -1,2,8,-6,3};
int n = 5;

int currsum = 0,   maxsum = INT_MIN;


 for(int i=0; i<n; i++){
    currsum += arr[i];
    maxsum = max(currsum, maxsum);

    if(currsum<0){
        currsum = 0;

    }

 }
          cout<<maxsum<<endl;

   return 0;
}