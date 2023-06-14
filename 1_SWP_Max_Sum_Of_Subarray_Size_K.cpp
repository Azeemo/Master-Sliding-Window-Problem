// CAN BE FOUND ON GFG AS MAX SUM OF SUBARRAY OF SIZE K
// APPROACH IS TOLD BY ADITYA VERMA
#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0,j=0;
        long ans=0,sum=0;
        while(j<N)
        {
            sum=sum+Arr[j];
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1==K)
            {
                ans=max(ans,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
            
        }
        return ans;
        
    }
    
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}
