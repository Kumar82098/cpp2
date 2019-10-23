#include<iostream>
using namespace std;

int main()
{
  int i,j,k,a[3][3],b[3][3],ab[3][3],sum=0;
  
  cout<<endl<<"Enter nine elements for first matrix: "<<endl;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     cin>>a[i][j];
  
  cout<<"Enter nine elements for second matrix : "<<endl;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     cin>>b[i][j];
     
  for(i=0;i<3;i++)
   {
	   for(j=0;j<3;j++)
	   {
	     sum=0;
	     for(k=0;k<3;k++)
	      { 
	      sum=sum+a[i][k]*b[k][j];
	      }
         ab[i][j]=sum;
       }  
   }
   cout<<endl<<"Multiplied matrix is:"<<endl;
   for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	   cout<<ab[i][j]<<" "<<endl;	   
return 0;
}   
 
