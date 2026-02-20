#include<iostream>
using namespace std;


int main()
{
int arr[] = {  5, 9  };
int size = sizeof(arr)/ sizeof(int);
int product = 1;

for(int i = 0; i<size; i++){
   product = product * arr[i];
       
}
               cout<<"product of elements is "<<" "<< product <<endl;

    return 0;
}



