class Solution {
public:
    double time (vector<int>& piles,int k){
        double hours=0;
        for(auto i:piles){
            hours+= ceil(double(i)/double(k));
            
        }
        return hours;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= *max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid=low+(high-low)/2;
            double hours=time(piles,mid);
            if(hours> h){
                low=mid+1; 
            }
            else if(hours<=h){
                high=mid-1;
            }
            
        } 
         
        return low;
    } 
};