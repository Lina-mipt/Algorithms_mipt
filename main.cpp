#include <string> 
#include <iostream> 
#include <vector>
#include <algorithm> 

using namespace std; 

int main()
{
    long long n = 0; 
    scanf("%lld", &n);  
    long long cnt = 1; 
    vector<long long> subseq; 
    long long tmp; 
    scanf("%lld", &tmp); 
    subseq.push_back(tmp); 
    cout << 1 << endl; 
    
    for(long long i = 1; i < n; i++)
    {
        scanf("%lld", &tmp); 
        long long p = subseq.end() - subseq.begin() - 1;
        if(tmp >= subseq[p])
        {
            subseq.push_back(tmp);
            cnt++; 
        }
        else 
        {
            subseq[upper_bound(subseq.begin(), subseq.end(), tmp) - subseq.begin()] = tmp; 
        }

        printf("%lld\n", cnt);   
    }
}
