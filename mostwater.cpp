#include<iostream>
using namespace std;
int main()
{
   int height[] = {1,5,4,7,8,6,5,3,8};
   int size = sizeof(height)/ sizeof(int);

   int maxwater = 0;

   for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
        int width = j-i;

        int ht = min(height[i], height[j]);
        int area = width*ht;

        maxwater = max(width, area);
    }
   }
    return maxwater;
}