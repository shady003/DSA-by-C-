#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{	vector<int> ans;
	int i=0; int j=0;
	while(i<n&&j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr2[j]>arr1[i]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {3,4,5};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);
    cout << "Intersection of two arrays is: ";
    for (int i = 0; i < result.size(); i++) {   
        cout << result[i] << " ";
        }   
        return 0;
        

}