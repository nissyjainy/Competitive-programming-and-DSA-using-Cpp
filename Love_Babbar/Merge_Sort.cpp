 #include <iostream>
using namespace std;
int merge(int arr[],int s, int e)
{
    int mid = s + (e-s)/2;
    int len1= mid - s+1; //size allocation of the first array
    int len2= e-mid;  //size allocation of the second array
    int *first = new int[len1];  //making of the first aaray of length 1
    int *second = new int [len2]; //making of the second array of length 2
    int k = s;              /* Copying the data for the first array*/
    for(int i=0;i<len1;i++)
    {
           first[i]=arr[k++];  
    }
     k = mid+1;            /*copying the data for the second array*/
    for(int i=0;i<len2;i++)
    {
         second[i]=arr[k++];  
    }
    
        /*Merging the 2 sorted arrays*/
        int i1=0; // array 1 mate che
        int i2=0; // array 2 mate che
        k=s;
        while(i1<len1 && i2<len2)
        {
            if(first[i1]<second[i2]) // array to first ane second che n
            {
                arr[k++]=first[i1++];
            }
            else
            {
                arr[k++]=second[i2++];
            }
            while(i1<len1)
            {
             arr[k++]=first[i1++];   
            }
           while(i2<len2)

            {
               arr[k++]=second[i2++];
            }
        }

    }


void mergesort(int arr[],int s,int e)
{
   
    if(s>=e)
    {
        return;

    }
     int mid = s+(e-s)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[5]={21,43,2,35,432};
    int size = 5;
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}