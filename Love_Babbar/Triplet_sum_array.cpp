//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //sort karish ok pehla to 
        sort(A,A+n);
        //sort to thai gayu che ok 
        int i =0;
        int j = n-1;
        int count =0;
        while(i<j)
        {
            if(A[i]+A[j]>X)
            {
                j--;
            }
            else if(A[i]+A[j]<X)
            {
                int d = X-(A[i]+A[j]);
                for(int k=i+1;k<j;k++)
                {
                    if(A[k]==d)
                    {
                        count++;
                    }
                }
                i++;
                j--;
            }
            else if(A[i]+A[j]==X)
            {
                for(int m=0;m<n;m++)
                {
                    if(A[m]==0)
                    {
                        count++;
                    }
                }
            }
            i++;
            j--;
        }
       if(count>0)
       {
        return 1;
       }
       return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends