class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        int sum =0;
        for(int i=0;i<gain.size();i++)
        {
            v.push_back(sum);
            cout<<sum<<"\n";
            sum = sum + gain[i];
        }
        int d = *max_element(v.begin(),v.end());
        return d;
    }
};




