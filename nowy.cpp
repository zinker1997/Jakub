#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int maxmin()
{
	srand(time(0));
	int const N=10;
	int tab[N];
	for(int i=0;i<N;i++)
		{
		tab[i]=rand()%100;
		cout<<tab[i]<<" ";
		}
	int k=tab[1];
	int l=tab[1];
	for(int i=0;i<N;i++)
		{
		if(tab[i]>=k)
			{
			k=tab[i];
			}
		}
    cout<<endl;
	cout<<k;
	for(int i=0;i<N;i++)
		{
		if(tab[i]<=l)
			{
			l=tab[i];
			}
		}
	cout<<endl;
	cout<<l;
	return 0;
}
int sortowanie()
{
	srand(time(0));
	int const N=10;
	int tab[N];
	for(int i=0;i<N;i++)
		{
		tab[i]=rand()%100;
		
		}
	
	for(int j=0;j<N;j++){
	for(int i=0;i<N;i++)
	{
		if(tab[i]>tab[i+1])
		{
			int k=tab[i];
			tab[i]=tab[i+1];
			tab[i+1]=k;
			
		}
		
		
	}
	
	}	
	cout<<endl;
		for(int i=0;i<N;i++)
	{
		cout<<tab[i]<<" ";
		
	}
	return 0;
}


int main()
{
maxmin();
cout<<endl;
sortowanie();
return 0;
}
