//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<int> insert(vector<int>arr,int ele){
        if(arr.size()==0|| arr[arr.size()-1]<=ele){
            arr.push_back(ele);
            return arr;
        }
        int last= arr[arr.size()-1];
        arr.pop_back();
        vector<int> t = insert(arr,ele);
        t.push_back(last);
        return t;
    }
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    if(n==1){
        return arr;
    }
    int last = arr[n-1];
    arr.pop_back();
    vector<int> v = sortArr(arr,n-1);
    vector<int> ans = insert(v,last);
    return ans;
    }
    
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends
