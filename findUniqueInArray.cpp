#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i =0 ; i<size; i++) ans = ans^ arr[i];

    return ans;
}
void printArray(int arr[], int size){
            for(int i =0 ; i<size;i++) cout<<arr[i]<<" ";
            cout<<endl;
}
int main(){
    //this algoritem is effective when there is only one unique value ...
        int arr[7] = {1,2,3,7,1,2,3};
        printArray(arr,7);
        int unique = findUnique(arr,7);
        cout<<"Unique Value : "<<unique<<endl;



        return 0;
    
}