#include <iostream>;
#include <fstream>;
#include <string>;
#include "stdafx.h"

using namespace std;

int main(){
	string line;
	int tot=0;
	int num_ints=0;
	ifstream in;
	in.open("numbers.txt");
	if (in.is_open()) {
		while (in.peek() != EOF){
			getline(in, line);
			tot = tot + stoi(line);
			num_ints++;
		}
		in.close();
		cout << tot / num_ints << endl ;
	}
	return 0;
}