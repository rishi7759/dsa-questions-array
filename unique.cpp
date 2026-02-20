/*  

#include<iostream>
using namespace std;

void uniqueNUMBER(int arr[], int size, int &ans) {
    
    for (int i = 0; i<size; i++) { 
        ans = ans^arr[i];
        
    }
    
}

int main()
{         
    int arr[] = {5,5,4,4,8};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    
    uniqueNUMBER(arr, size, ans);
    
    cout<<"unique value is"<<" "<< ans <<endl;
    
    return 0;
}
    */


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,1,2,3,3};
//     int size = sizeof(arr)/ sizeof(int);

    
//     int count = 0;
    
//     for(int i = 0; i<size; i++){
        
//         for(int j = 0; j<size; j++){
            
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
  
        
//         if(count == 1)
//             cout<<arr[i]<<endl;
        
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,3,2,4,4,8,8};
    int size = sizeof(arr)/ sizeof(int);

    int ans = 0;
    
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    cout<<"ans : "<<ans<<endl;
    
}


