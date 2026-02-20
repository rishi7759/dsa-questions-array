#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1,5,4,8,3,-5};
    int size = sizeof(arr)/sizeof(int);

    int minele = INT_MAX;

    for(int i = 0; i<size; i++){
        int currele = 0;

        currele += arr[i];

        minele = min(currele, minele);
    }
    cout<<"minimum element is:"<<" "<<minele<<endl;
}