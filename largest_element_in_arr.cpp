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



int largest_element_in_arr(vector<int>& arr) {
    // Code goes here
    int m = INT_MIN ; 
    for(auto& i : arr) m = max(m , i) ;
    return m ;
}


int32_t main() {
    fast_io;
    vector<int> arr = {3,6,7,22,578};
    cout << largest_element_in_arr(arr) ;

        
    return 0;
}