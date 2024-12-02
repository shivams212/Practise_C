// STL Algo's
 
// Sort
// Sort ()
// Reverse
// Max_element
// Min_Element
// Accumulate
// Count
// Find ->
// Binary_search()
// Lower_bound
// Upper_bound


#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	vector<int> v{ 2,3,4,5,6 ,2,2};
	sort(v.begin(), v.end(), greater<int>());
		/*{
			return a > b;
		});
	*/
	//sort(v.begin(),v.end(),)

	for (auto i : v)		cout << i << " ";

	cout << endl;

	reverse(v.begin(), v.end());
	for (auto i : v)	cout << i<<" ";

	cout << endl;

	auto max_ele=max_element(v.begin(), v.end());
	cout << "Max element:";
	cout<<(*max_ele) << endl;

	auto min_ele = min_element(v.begin(), v.end());

	cout << *min_ele << endl;

	auto sum= accumulate(v.begin(), v.end(),0);
	cout << sum<<endl;

	auto count_number=count(v.begin(), v.end(), 2);

	cout << count_number << endl;

	auto search_ele=find(v.begin(), v.end(), 1);
	//cout << *search_ele << endl;
	if (search_ele!=v.end())
	{
		cout << "ELement is present"<<endl;
	}
	else
	{
		cout << "Not present"<<endl;
	}
	//auto search_ele1=v.shrink_to_fit]
	
	auto search = binary_search(v.begin(), v.end(),1);
	//binary_search()

	if (search )
	{
		cout << "Binary seacrch Element is present "<<endl;
	}
	else {
		cout << "Element not found"<<endl;
	}

	auto lbound = lower_bound(v.begin(), v.end(), 1);
	cout << *lbound<<endl;

	auto ubound = upper_bound(v.begin(), v.end(), 2);
	cout << *ubound;

	return 0;
}
