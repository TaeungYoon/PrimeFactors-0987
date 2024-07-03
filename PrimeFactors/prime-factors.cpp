#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			if (number == 4) {
				while (number % 2 == 0) {
					result.push_back(2);
					number /= 2;
				}
			}
			else if (number == 6) {
				if (number % 2 == 0) {
					result.push_back(2);
					number /= 2;
				}

				if (number % 3 == 0) {
					result.push_back(3);
					number /= 3;
				}
			}
			else {
				result.push_back(number);
			}
		}
		return result;
	 }
};