#include <bits/stdc++.h>
using namespace std;

char NextAlfabaticNumber(string s, char ch)
{
	char ans;
	int low = 0;
	int high = s.size() - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (s[mid] > ch)
		{
			ans = s[mid];
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	char ch;
	cin >> ch;
	cout << NextAlfabaticNumber(s, ch);
}
