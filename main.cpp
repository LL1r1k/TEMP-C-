#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <limits.h>
#ifdef _LLIRIK
#include <chrono>
#endif

#define PB push_back
#define MP make_pair
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define REP(i, n) for(int i=0; i<n; ++i)
#define REPD(i, n) for(int i=(n)-1; i>=0; --i)
#define FOR(i, b, e) for(int i=b; i<e; ++i)

using namespace std;

struct Node
{
	int value;
	Node* prev = nullptr;
	Node* next = nullptr;
};

void insert(Node* prev, int value)
{	
	Node* a = new Node;
	a->value = value;
	a->next = prev->next;
	a->prev = prev;

	prev->next->prev = a;
	prev->next = a;
}

Node* add(Node* node, int n)
{
	n--;
	if (n < 0) return nullptr;

	int a;
	scanf("%d",&a);
	Node* tmp = new Node;
	node->next = tmp;
	tmp->value = a;
	tmp->prev = node;
	tmp->next = add(tmp, n);
	return tmp;
}

Node* getNode(Node* node, int d)
{
	d--;
	if (d < 0) return node;
	return getNode(node->next, d);
}

void delet(Node* node, int d)
{
	Node* nod = getNode(node, d-1);
	printf("%p %p", nod->prev, node->next);
	nod->prev->next = node->next;
	node->next->prev = node->prev;
	delete nod;
}

int main() {
#ifdef _LLIRIK
	/*freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);*/
	auto begin = std::chrono::system_clock::now();
	srand(time(0));
#else
	freopen("fairphoto.in", "r", stdin);
	freopen("fairphoto.out", "w", stdout);
#endif // _LLIRIK
	

	Node* first = new Node;
	int n;
	scanf("%d", &n);
	int a;
	scanf("%d", &a);
	first->value = a;


	add(first, n-1);

	int d;
	scanf("%d", &d);

	delet(first, d);

#ifdef _LLIRIK
	auto end = std::chrono::system_clock::now();
	auto time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
	cout << endl << "Time: " << time << " milliseconds" << endl;
#endif // _LLIRIK
	return 0;
}