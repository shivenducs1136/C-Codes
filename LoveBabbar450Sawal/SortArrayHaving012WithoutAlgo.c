void sort012(int a[], int n)
{
    int i,j,k;
    int zeros=0,ones=0,twos=0; 
    for(i=0;i<n;i++){
        if(a[i] == 0){
            zeros++; 
        }
        if(a[i] == 1){
            ones++; 
        }
        if(a[i] == 2){
            twos++; 
        }
    }
     i = 0; 
    while(zeros--){
        if(a[i]>0){
            a[i] = 0; 
        }
        i++; 
    }
    while(ones--){
        if(a[i] == 0 || a[i] == 2){
            a[i] = 1; 
        }
        i++; 
    }
    while(twos--){
        if(a[i] == 0 || a[i] == 1){
            a[i] =2; 
        }
        i++; 
    }
    
}
