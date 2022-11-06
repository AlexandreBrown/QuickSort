#ifndef GTESTSETUP_QuickSortAlgorithm_H
#define GTESTSETUP_QuickSortAlgorithm_H

#include <vector>

class QuickSortAlgorithm {
	public:

		void sortInPlace(std::vector<int>& a) const;
	private:
		void sortInPlaceRecursively(std::vector<int>& a, int l, int r) const;

		int partition(std::vector<int>& a, int l, int r) const;
};

#endif
