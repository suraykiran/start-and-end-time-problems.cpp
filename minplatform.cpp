//prefixsum
vector<int>ar(2401,0);
         vector<int>pre(2401,0);
    	  
         for(int i=0;i<n;i++)
         {
             ar[arr[i]]=ar[arr[i]]+1;
             ar[dep[i]+1]=ar[dep[i]+1]-1;
         }
         pre[0]=ar[0];
        for(int i=1;i<2401;i++)
        {
            pre[i]=pre[i-1]+ar[i];
        }
        // for(int i=0;i<50001;i++)
        // {
        //     cout<<pre[i]<<" ";
        // }
        int k=*max_element(pre.begin(),pre.end());
        return k;
        //greedy approach
       sort(arr,arr+n);
        sort(dep,dep+n);
        int i=1,j=0,cnt=1;
        while(i<n && j<n)
        {
            if(arr[i]<=dep[j])
            {
                cnt++;
            }
            else
            {
                j++;
            }
            i++;
        }
        return cnt;
