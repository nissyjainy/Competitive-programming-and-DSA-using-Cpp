#include <iostream>
using namespace std;

int main() {
   int i,t,n,k;
   cin>>t;
   for(i = 0;i<t;i++)
   {
       cin>>n>>k;
       string str;
       cin>>str;
       
       if(str[0]=='0')
       {
           str[0]='1';
           str.append(k-1,'0'); // jo agar 0 che to pehla change kar aene ok to 1 ane pachi append kar k-1 0 to end ok 
       }
       else
       {
            str.append(k,'0');  // jo agar initially 1 che to khali tare k 0 add karvanu che ok 
         
       }
     
       
      
       cout<<str<<"\n";
       
   }
	return 0;
}
// mei while thi karyu hatu ok aema shu problem che ??
// nearly mare bhi aavu j hatu ok change walu while walu and all pahi hu thodo deviate thai gayo hato ok vandho nahi ok 
// string ma add karva mate mare append no use kar ok .
