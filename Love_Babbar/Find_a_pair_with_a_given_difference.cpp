bool findPair(int arr[], int size, int n){
   //map thi kar ok 
   set<int>s;
   if(n==0)
   {
       for(int i=0;i<size;i++)
       {
           s.insert(arr[i]);
       }
       if(s.size()==size)
       {
           return false;
       }
       else
       {
           return true;
       }
   }
   
   unordered_map<int,int>maps;
   for(int i=0;i<size;i++)
   {
       maps[arr[i]]++;
       
   }
   
   for(int i=0;i<size;i++)
   {
       int y = arr[i]+n;
       if(maps[y])
       {
           return true;
       }
   }
   return false;
   //mare badha ne frequency aai gayi che ok
  
   