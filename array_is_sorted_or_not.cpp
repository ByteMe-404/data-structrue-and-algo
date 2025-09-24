#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef vector<int> vi;
typedef pair<int,int> pii;



int32_t main() {
    fast_io;
    vector<int> arr = {10,5,10};
    bool ascending = true;  
    bool decending = true;
    for(int i = 1 ; i< arr.size() ; i++){ 
        if(arr[i] < arr[i-1]){
            ascending = false ;
        }
        if(arr[i] > arr[i-1]){
            decending = false; 
        }
    }

    if(ascending || decending ) return true ;
    else return false; 
        
    return 0;
}