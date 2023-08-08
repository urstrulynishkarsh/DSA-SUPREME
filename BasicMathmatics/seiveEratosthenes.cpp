#include<iostream>
#include<vector>
using namespace std;


vector<int>Sieve(int n)
{
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(sieve[i]==true)
        {
            int j=i*i;
            while(j<=n)
            {
                sieve[j]=false;
                j+=i;
            }
        }
    }
    vector<int> primes;
    for(int i=2;i<=n;i++)
    {
        if(sieve[i])
        {
            primes.push_back(i);
        }
    }
    return primes;

}

int main()
{
    vector<int> primes=Sieve(198935);
    for(int i=0;i<primes.size();i++)
    {
        cout<<primes[i]<<" ";
    }
    return 0;
  
}