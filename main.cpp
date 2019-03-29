#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	string line;
	bool open = true;
	while(getline(cin, line)){
		string res = "";
		for(int i = 0; i< line.size(); i++){
			if(line[i] == '"'){
				if(open) res += "``";
				else res += "''";
				open = !open;
			} else res += line[i];
		}
		cout<<res<<endl;
	}
    return 0;
}
