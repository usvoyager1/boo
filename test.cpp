#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Histo.hpp"

using namespace std;


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
