#include<iostream>
using namespace std;
int main()
{
int arr[] = { 1,2,5,8,4};
int n = 5;

for(int st = 0; st<n; st++){
    for(int end=st; end<n; end++){
        for(int i = st; i<end;i++){
            cout<<arr[i];
        }
        cout<<" ";
    }
    cout<<endl;
}

    return 0;
}