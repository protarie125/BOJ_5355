#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	cin.get();

	char c;
	while (0 < (t--)) {
		string s;
		getline(cin, s);

		auto iss = istringstream{ s };
		double x;
		iss >> x;
		while (iss >> c) {
			if ('@' == c) {
				x *= 3;
			}
			else if ('%' == c) {
				x += 5;
			}
			else if ('#' == c) {
				x -= 7;
			}
		}

		cout << fixed << setprecision(2) << x << '\n';
	}

	return 0;
}