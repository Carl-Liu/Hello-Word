#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <sstream>
#include <stack>

using namespace std;

int maxProfit(vector<int>& prices) {
	if(prices.size()<=0)
		return 0;
	int profit = 0;
	int currmin = prices[0];
	int theSize = prices.size();
	for (int i= 1; i<theSize;++i)
	{
		if(prices[i]<currmin)
			currmin = prices[i];
		profit = (prices[i]-currmin>profit)?(prices[i]-currmin):profit;
	}
	return profit;
}


int main()
{
	int a[5] = {5,4,3,2,1};
	vector<int> vec(a,a+5);

	cout<<maxProfit(vec);
	//cout<<multiply("99","100")<<endl;

	system("pause");
}
