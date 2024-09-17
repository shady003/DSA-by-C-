#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size) 
{
    int ans = 0;
    
    // XOR all array elements
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];
    }
    
    // XOR with numbers from 1 to size-1 (assuming array contains numbers from 1 to size-1 with one duplicate)
    for (int i = 1; i < size; i++) {
        ans ^= i;
    }
    
    return ans;
}
void printArray(int arr[], int size){
            for(int i =0 ; i<size;i++) cout<<arr[i]<<" ";
            cout<<endl;
}
int main(){
   
        int arr[7] = {1,2,3,8,8,9,7};
        printArray(arr,7);
        int unique = findDuplicate(arr,7);
        cout<<"Duplicate Value : "<<unique<<endl;



        return 0;
    
}