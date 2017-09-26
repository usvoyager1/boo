#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Histo.hpp"

using namespace std;

Histo::Histo(vector<int> a){
	this->buckets=a;
}

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

