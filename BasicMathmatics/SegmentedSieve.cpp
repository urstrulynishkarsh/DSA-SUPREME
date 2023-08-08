#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;



vector<int> Seive(int n)
{
    vector<bool> sieve(n+1,true);
   sieve[0]= sieve[1]=false;
    for(int i=2;i*i<=n;i++){
         if(sieve[i]==true)
         for(int j=i*i;j<=n;j+=i)
        {
            sieve[j]=false;
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


vector<int> SegmentedSieve(int L,int R)
{
    int limit=sqrt(R)+1;//11
    vector<int>primes= Seive(limit);//2,3,5,7,11
    vector<bool> isPrime(R-L+1,true);//91

    for (int i = 0; i < primes.size() && primes[i] <= sqrt(R); i++) {
        int prime = primes[i];
        int start = max(prime * prime, (L / prime) * prime);
        if (start < L) {
            start += prime;
        }
        for (int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    vector<int> segmentedPrimes;
    for (int i = L; i <= R; i++)
    {
        if (isPrime[i - L])
        {
            segmentedPrimes.push_back(i);
        }
    }

    return segmentedPrimes;


}

int main()
{
    int L=10;
    int R=100;
    vector<int> primes=SegmentedSieve(L,R);

    for(int i=0;i<primes.size();i++)
    {
        cout<<primes[i]<<" ";
    }
    return 0;
}