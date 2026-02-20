#include<iostream>
#include<climits>
using namespace std;


int main()
{
   int arr[] = {5,9,7,11,13};
   int size = sizeof(arr)/sizeof(int);

   int maxele = INT_MIN;

      for(int i = 0; i<size; i++){
        int currele = 0;
       
            currele += arr[i];

            maxele = max(currele, maxele);
        }
      

        cout<<"max element is"<<" " <<maxele<<endl;
    return 0;
}




