#define TYPE_TEA 0
#define TYPE_COFFEE 1
#define MAX 100
struct Location
{
	double x;
	double y;
};
struct Tree
{
	Location point;
	int type;
};
struct Plantation
{
	Tree tree[MAX];
	int countTrees;
};
