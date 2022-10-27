int i,j,k,n,m,l,a[10][10][10];
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter m:\n");
	scanf("%d",&m);
	printf("Enter l:\n");
	scanf("%d",&l);
	
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<l;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	
	printf("Entered elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<l;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
