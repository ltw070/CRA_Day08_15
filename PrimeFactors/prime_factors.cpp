#include <vector>

using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		for (int divider = 2; number > 1; divider++) {
			while (number % divider == 0) {
				result.push_back(divider);
				number /= divider;
			}
		}
		return result;
	}
};

// changes
// 수정 