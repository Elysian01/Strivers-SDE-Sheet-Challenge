#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    int i,j,op=0,cp = 0, m = prices[0];
    int n = prices.size();
    for(i=1;i<n;i++)
    {
        if (m > prices[i])
        {
            m = prices[i];
        }

        cp = prices[i] - m;
        if (op < cp)
            op = cp;
    }
    return op;
}