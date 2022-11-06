#include "QuickSortAlgorithm.h"

using namespace std;

void QuickSortAlgorithm::sortInPlace(vector<int>& a) const {
	sortInPlaceRecursively(a, 0, a.size() - 1);
}

void QuickSortAlgorithm::sortInPlaceRecursively(vector<int>& a, int l, int r) const {
	if (l < r) {
		int s = partition(a, l, r);
		sortInPlaceRecursively(a, l, s - 1);
		sortInPlaceRecursively(a, s + 1, r);
	}
}

int QuickSortAlgorithm::partition(vector<int>& a, int l, int r) const {
	int pivotInitialIndex = l;
	int pivotValue = a[pivotInitialIndex];
	int pivotIndex = pivotInitialIndex;

	for (int i = pivotInitialIndex + 1; i <= r; ++i) {
		if (a[i] <= pivotValue) {
			pivotIndex++;
			swap(a[i], a[pivotIndex]);
		}
	}
	swap(a[pivotInitialIndex], a[pivotIndex]);

	return pivotIndex;
}
