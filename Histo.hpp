
using namespace std;

class Histo {
	vector<int> buckets;
public:
	Histo(vector<int> a);
	vector<float> get_histo(void);
};
