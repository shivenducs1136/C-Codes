main()
{
    int mat[50][50];
    int i,j,k,l,n,flag=0;
    printf("Enter the order \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]==mat[j][i])
            flag=1;
            else{
        flag=0; break;
            }
        }
    }
    if(flag==1) printf("SYMMETRIC");
    else printf("NOT SYMMETRIC");
}