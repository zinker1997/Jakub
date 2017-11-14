#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void los( int*tab,int n)
{
	int *kopia=tab;
	srand(time(0));
	while(n>0)
	{
		*tab=rand()%10;
	     {
	     	cout<<*tab<<" ";
		 }
		
		tab++;
		n--;
	
	}
	cout<<endl;

}

int max(int *tab)
{
		int k=tab[1];
	
	for(int i=0;i<10;i++)
		{
		if(tab[i]>=k)
			{
			k=tab[i];
			}
		}
    
	
	return k;

}
int min(int*tab)
{
	int l=tab[1];
	for(int i=0;i<10;i++)
		{
		if(tab[i]<=l)
			{
			l=tab[i];
			}
		}
	return l;	
}

void sortowanie(int *tab)
{
int j,buf;
for(int i=1;i<10;i++)
{
	buf=tab[i];
	j=i-1;
	 while(j>=0 && tab[j]>buf) 
    {
        tab[j+1] = tab[j];
        j--;
    }
        tab[j+1] = buf;
	
}
   		
   	
}
	
	
	

int main(){
srand(time(0));
int n;
cin>>n;
int *tab=new int[n];


los(tab,n);


delete []tab;

int tablica[10];

	for(int i=0;i<10;i++)
	{
	 tablica[i]=rand()%100;
	}
    
    for(int i=0;i<10;i++)
	{
	 cout<<tablica[i]<<" ";
	}
	cout<<endl;
	cout<<min(tablica);
	cout<<endl;
	cout<<max(tablica);
	cout<<endl;
	sortowanie(tablica);
	for(int i=0; i<10; i++)
	{
	
            cout<<tablica[i]<<" ";
    }

}
