#include<vector>
#include<iostream>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maximum=INT_MIN,profit=INT_MIN;

        for(int i=1;i<prices.size();i++){
            int minimum=INT_MAX;

            for(int j=0;j<i;j++){
                minimum=min(minimum,prices[j]);
                
            }
            
            if(profit<prices[i]-minimum){
                profit=prices[i]-minimum;
            }
        }
        if(profit>0){return profit;}
        else{return 0;}
}

int main(){
    vector <int> prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
}
