#include<stdio.h>// Changed to C lang
int andop(int a,int b){
    
    return a&b; 

}
int orop(int a,int b){
    return a|b; 
}
int xorop(int a,int b){
    return a^b;
}
int main(){


    int n,k;
    scanf("%d %d",&n,&k); // Changed to C lang
    int andy=0,ory=0,xory=0; 
    int r1,r2,r3;
    int i,j; 
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){

              r1 = andop(i,j);
              r2 = orop(i,j);   
              r3 = xorop(i,j); 

            if(andy<r1 && r1<k){
                andy = r1; 
            }
            if(ory<r2 && r2<k){
                ory = r2; 
            }
            if(xory<r3 && r3<k){
                xory = r3; 
            }
        }

    }
    printf("%d\n%d\n%d",andy,ory,xory); // Changed to C lang


    return 0; 
}