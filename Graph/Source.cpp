#include <vector>
#include <list>

struct Edge
{
	int mEndNode;
	int mWeight;

	Edge() : mEndNode(-1), mWeight(-1) {};
	Edge(int endNode, int weight) : mEndNode(endNode), mWeight(weight)
	{
	}
};

struct Graph
{
private:
	std::vector<std::list<Edge>> mData;

public:
	const int mSize;

	Graph(int size) : mSize(size), mData()
	{
		mData.resize(mSize);
	}

	void add_edge(int u, int v, int weight)
	{
		mData[u].push_back(Edge(v, weight));
	}

	std::list<Edge> get_edges(int u)
	{
		return mData[u];
	}
};
