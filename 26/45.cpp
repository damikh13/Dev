#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream F;
	string path = "C:\\Users\\damikh13\\Desktop\\26data\\26-45.txt";
	F.open(path);

	int n; F >> n;
	vector<int> even;
	vector<int> odd;
    vector<int> all_;
	for (int i = 0; i < n; ++i) {
		int x; F >> x;
		if (x % 2 == 0) {
			even.push_back(x);
		}
		else {
			odd.push_back(x);
		}
        all_.push_back(x);
	}

	sort(all_.begin(), all_.end());

	int cnt = 0, max_avg = -1;
	for (int i = 0; i < even.size() - 1; ++i) {
		for (int j = i + 1; j < even.size(); ++j) {
			int avg = (even[i] + even[j]) / 2;
			int l = 0, r = all_.size() - 1;
			while (l < r) {
				int middle = (l + r) / 2;
				if (avg > all_[middle]) {
					l = middle + 1;
				}
				else {
					r = middle;
				}
			}
			if (all_[r] == avg) {
				max_avg = max(max_avg, avg);
				++cnt;
			}
		}
	}
	
	for (int i = 0; i < odd.size() - 1; ++i) {
		for (int j = i + 1; j < odd.size(); ++j) {
			int avg = (odd[i] + odd[j]) / 2;
			int l = 0, r = all_.size() - 1;
			while (l < r) {
				int middle = (l + r) / 2;
				if (avg > all_[middle]) {
					l = middle + 1;
				}
				else {
					r = middle;
				}
			}
			if (all_[r] == avg) {
				max_avg = max(max_avg, avg);
				++cnt;
			}
		}
	}

    cout << cnt << ' ' << max_avg << '\n';
}