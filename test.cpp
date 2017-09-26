#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Histo {
	vector<int> buckets;
public:
	Histo(vector<int> a){
		this->buckets=a;
	}
	vector<float> get_histo(void);
};

vector<float> Histo::get_histo(void)
{
	int results[10]={0,0,0,0,0,0,0,0,0,0};
	vector<float> percents;
	for(int a : this->buckets){
		for(int i=0;i<10;i++){
			if(a>=i*10 && a<=i*10+9)
				results[i]++;
		}
	}
	for(int i=0;i<10;i++){
		percents.push_back(round((float)results[i]/this->buckets.size()*100)/100);
	}
	return percents;
}

int main(void){
	vector<int> a={3,4,12,45,34,76,88,45,22,34,55,79,96};
	vector<float> b;
	
	Histo *h=new Histo( a );
	
	b=h->get_histo();
	
	for(float c:b){
		cout << c << '\n';
	}
	return 0;
}
