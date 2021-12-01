   if(maxprofit == 0){
         for(i =0; i<n; i++ ){
            if(x<prices[i]){
                x = prices[i];
                ix = i; 
            }
    }
    // x , ix are max elements here
     for(k=ix-1;k>=0;k--){
        for(i=ix-1;i>=0;i--){
            if(prices[i]>=prices[i+1] && (i+1)>=0){
                j = prices[i]; 
                prices[i] = prices[i+1]; 
                prices[i+1] = j; 
            }
        } 
        }
          for(i=0;i<n;i++){
        cout<<prices[i]<<" ";  
    }
    maxprofit = x - prices[0];
    }
