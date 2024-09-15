#include <iostream>
using namespace std;
int main(){
        cout<<"enter the value to check wheater it can be represented in power of 2 or not :"<<endl;
        int _inputNumber;
        cin>>_inputNumber;
        int temp = _inputNumber;
        int count = 0;
        while(temp!=0){
            if((temp&1)==1){
                    count++;
                    temp = temp >> 1;
            }
            else{
                temp = temp >> 1;
            }
            }
    string check = count==1?"true":"false";
        cout<<"the 2's power condition is : "<<check<<endl;
    return 0;
}