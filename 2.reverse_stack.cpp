//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    stack<int> insert(stack<int> s,int ele){
        if(s.empty()){
            s.push(ele);
            return s;
        }
        int t = s.top();
        s.pop();
        insert(s,ele);
        s.push(t);
        return s;
        
    }
    stack<int> solve(stack<int> s){
        if(s.size())return s;
        int t = s.top();
        s.pop();
        solve(s);
        insert(s,t);
        return s;
    }
    vector<int> Reverse(stack<int> st){
        stack<int> s = solve(st);
        vector<int> a;
        while(!s.empty()){
            a.push_back(s.top());
            s.pop();
        }
        return a;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}
// } Driver Code Ends
