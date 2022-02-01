#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int m;
	cin >> m;

	cout << (8 <= m ? "satisfactory" : "unsatisfactory");
	
	return 0;
}