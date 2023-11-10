#include <iostream>
using namespace std;
int main()
{
	cout << "\n task1 \n";
	float n1, n2, n3, avg;
	cin >> n1 >> n2 >> n3;
	if (cin && n1 != n2 && n2 != n3 && n1 != n3) {
		if (n1 < n2) {
			if (n1 > n3) avg = n1;
			else if (n3 < n2) avg = n3;
			else avg = n2;
		}
		else if (n2 > n3) avg = n2;
		else if (n3 > n1) avg = n1;
		else avg = n3;
	}
	else cout << "Must be different";

	cout << avg;

	cout << "\n task_geom19 \n";
	float x, y, r;
	bool is_in1, is_in2;
	cin >> r;
	cin >> x >> y;
	if (cin && r > 0) {
		is_in1 = x > 0 && x < r && y > 0 && y < r && (x - r) * (x - r) + (y - r) * (y - r)>r * r;
		is_in2 = false;
		if (is_in1 || is_in2)
			cout << "In" << endl;
		else
			cout << "Out" << endl;
	}
	else cout << "Invalid data" << endl;

	return 0;
}