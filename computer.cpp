  int arr[f]={0};
         int pre[f1]={0};
         for(int i=0;i<N;i++)
         {
             arr[start[i]]=arr[start[i]]+1;
             arr[end[i]]=arr[end[i]]-1;
         }
         pre[0]=arr[0];
        for(int i=1;i<f;i++)
        {
            pre[i]=pre[i-1]+arr[i];
        }
        int k=*max_element(pre,pre+(f+1));
        return k;
