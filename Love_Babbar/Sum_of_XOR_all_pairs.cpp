class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	long long sum = 0;
        
    	for(int i=0;i<32;i++)
    	{
    	    long one = 0;
        	long zero =0;
    	    	
    	    for(int j =0;j<n;j++)
    	    {
    	        if(arr[j]%2==0)
    	        {
    	            zero++;
    	        }
    	        else
    	        {
    	            one++;
    	        }
    	        arr[j]/=2;
    	    }
    	    sum += (zero*one)*(1<<i); //1<<i atke hu shu kau chu ki tare 2^i aavshe ok aema ok 
    	}
    	return sum;
    }
};