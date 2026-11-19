class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>flights(n,0);
        vector<int>answer(n,0);
        for(auto x:bookings){
            int l=x[0],r=x[1],seats=x[2];
            flights[l-1]+=seats;
            if(r<n)flights[r]-=seats;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=flights[i];
            answer[i]=sum;
        }
        return answer;
    }
};