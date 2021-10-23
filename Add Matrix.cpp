void Sparse_Matrix::Add_SparseMatrix(int m[x][3],int n[y][3])
{	int i,j,k;
	mmax=m[0][2];//denotes maximum no. of rows in m
	nmax=n[0][2];//..........in n
	i=j=k=1; // i=row of matrix a , j= row of col.
	int e1=m[0][2];//e1 = element1//
	int e2=n[0][2];
	int q[e1+e2][2];//
	while(i<=mmax||j<=nmax)
	{
    	if(m[i][0]<=n[j][0])
    	{
		 if(m[i][0]==n[j][0])
		 {
			if(m[i][1]==m[j][1])
			{
				q[k][0]=m[i][0];
			    q[k][1]=m[i][1];
			    q[k][2]=m[i][2]+n[j][2];
			    k++;
			    j++;
			    i++;
			}
			else
			{
				if(m[i][1]<n[i][1])
				{
					q[k][0]=m[i][0];
			        q[k][1]=m[i][1];
			        q[k][2]=m[i][2];
			        k++;
			        i++;
				}
				else
				{
					q[k][0]=n[j][0];
			        q[k][1]=n[j][1];
			        q[k][2]=n[j][2];
			        k++;
			        j++;
				}

			}

		}
		else
		{
			q[k][0]=m[i][0];
			q[k][1]=m[i][1];
			q[k][2]=m[i][2];
			k++;
			i++;
		}
	   }
	else
	 {
		q[k][0]=n[j][0];
		q[k][1]=n[j][1];
		q[k][2]=n[j][2];
		k++;
		j++;
	 }
	}
q[0][0]=m[0][0];
q[0][1]=m[0][1];
