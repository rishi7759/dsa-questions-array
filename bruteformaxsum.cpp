#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {-2, 8, 6, -5, 7};
    
     int n = 5;
  int maxsum = INT_MIN;

   for(int i =0; i<n; i++){
    int currsum = 0;
    for(int j = i; j<n; j++){
        currsum += arr[j];
        maxsum = max(currsum, maxsum);
    }
   }
   cout<<"max subarray sum"<<" "<<maxsum<<endl;

    return 0;
}