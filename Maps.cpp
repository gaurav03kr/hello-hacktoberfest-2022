
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{

	map<int, int> mp;

	mp.insert(pair<int, int>(1, 40));
	mp.insert(pair<int, int>(2, 30));
	mp.insert(pair<int, int>(3, 60));
	mp.insert(pair<int, int>(4, 20));
	mp.insert(pair<int, int>(5, 50));
	mp.insert(pair<int, int>(6, 50));
	
	mp[7]=10;
	

	map<int, int>::iterator itr;
	cout << "\nThe map mp is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	map<int, int> gquiz2(mp.begin(), mp.end());

	cout << "\nThe map gquiz2 after"
		<< " assign from mp is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	cout << "\ngquiz2 after removal of"
			" elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	cout << "mp.lower_bound(5) : "
		<< "\tKEY = ";
	cout << mp.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << mp.lower_bound(5)->second
		<< endl;
	cout << "mp.upper_bound(5) : "
		<< "\tKEY = ";
	cout << mp.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << mp.upper_bound(5)->second
		<< endl;

	return 0;
}
