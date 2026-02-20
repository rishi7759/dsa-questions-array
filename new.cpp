

// isme largest sum of a subarray niklna hai 


#include<iostream>
#include<climits>
using namespace std;

int main()
{
     int arr[] = {1, -2, 3, 4};  
     int size = sizeof(arr)/sizeof (int);

     int maxsum = INT_MIN;

     for(int i = 0; i<size; i++){
        int currsum = 0;

        for(int j = i; j<i; j++){
            currsum += arr[j];

            maxsum = max(currsum, maxsum);   

        }
     }
      cout<<"mera answer idhr hai"<<" "<< maxsum<<endl;

           return 0;
}