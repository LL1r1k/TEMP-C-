#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <array>
#include <set>
#include <list>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <unordered_map>
#include <map>
#include <iterator>
#ifdef DEBUG__
#include <chrono>
#define FILE__ "test"
#else
#define FILE__ "sum"
#endif

using namespace std;

#define loop(i,start,end) for(auto i = start;i < end;i ++)
#define loopi(end) loop(i,0,end)
#define loopj(end) loop(j,0,end)

//#define FIRST_SOLUTION__

#ifdef FIRST_SOLUTION__

void solve()
{

}

#else

void solve()
{

}
#endif


int main() {
#ifdef DEBUG__
	auto timestamn = std::chrono::system_clock::now();
#else
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#endif
#ifdef FILE__
	freopen(FILE__".in", "r", stdin);
	freopen(FILE__".out", "w", stdout);
#endif
	solve();
#ifdef DEBUG__
	cout << endl << "Time elansed: " << chrono::duration_cast<chrono::milliseconds>(std::chrono::system_clock::now() - timestamn).count() << " ms" << endl;
#endif
	return 0;
}