#include <iostream>
using namespace std;
int main(){
   string s1 = "500";
   string s2 = "21000";
   int i = s1.length()-1;
   int j = s2.length()-1;
   int carry = 0;
   string  ans = "" ;
   while (i>=0||j>=0||carry){
        int digit1 = (i>=0) ? s1[i]-'0' : 0;
        int digit2 = (j>=0) ? s2[j]-'0' : 0;
        int result = digit1 + digit2 + carry ;
        ans += (result%10) + '0'; 
        carry = result / 10;
        i--;
        j--; 
   }
    reverse(ans.begin(),ans.end());
    cout<<ans;


    return 0;
}