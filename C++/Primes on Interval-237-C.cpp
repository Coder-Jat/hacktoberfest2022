#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

typedef long long ll;

int a, b, k;
int cntPrimes[N];
bool notPrime[N];

void seive()
{
	notPrime[0] = notPrime[1] = true;
	for(ll i = 2; i < N; i++)
	{
		if(notPrime[i]) continue;
		for(ll j = i * i; j < N; j += i)
		{
			notPrime[j] = true;
		}
	}
	for(int i = 2; i < N; i++)
	{
		cntPrimes[i] += cntPrimes[i - 1] + (!notPrime[i]);
	}
}

bool valid(int l)
{
	for(int i = a; i + l - 1 <= b; i++)
	{
		if(cntPrimes[i + l - 1] - cntPrimes[i - 1] < k) return false;
	}
	return true;
}

int main()
{
	seive();
	scanf("%d%d%d", &a, &b, &k);
	int s = 1, e = b - a + 1, mid, l = -1;
	while(s <= e)
	{
		mid = s + (e - s) / 2;
		if(valid(mid))
		{
			l = mid;
			e = mid - 1;
		}
		else s = mid + 1;
	}
	printf("%d\n", l);
	return 0;
}