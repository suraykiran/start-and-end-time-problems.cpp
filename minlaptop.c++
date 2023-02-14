//prefixsum
static bool comp(const pair<int,int>&a,const pair<int,int>&b)
   {
          if(a.first==b.first)
          return a.second<b.second;
          return a.first<b.first;
   }
    int minLaptops(int N, int start[], int end[]) {
        vector<pair<int,int>>v;
        for(int i=0;i<N;i++)
        {
            v.push_back({start[i],1});
            v.push_back({end[i],-1});
        }
        sort(v.begin(),v.end(),comp);
        int cont=0;
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            cont+=v[i].second;
            ans=max(ans,cont);
        }
        return ans
        //greedy approach
        sort(start,start+N);
       sort(end,end+N);
       int k=end[0];
       int cont=1;
       int j=0;
       for(int i=1;i<N;i++)
       {
           
           if(start[i]<end[j])
            cont++;
            else
            j++;
       }
       return cont;
