#include <bits/stdc++.h>
using namespace std;
string line;
bool open = true;

void process_line(string &, string &);

int main(int argc, char *argv[]) {
	string modified_string = "";
	while(getline(cin, line))
		process_line(line, modified_string);
	cout<<modified_string<<endl;
    return 0;
}

void process_line(string &in, string &out){
	for(int i = 0; i< in.size(); i++){
		if(in[i] == '"'){
			if(open) out += "``";
			else out += "''";
			open = !open;
		}
		else
			out += line[i];
	}
	out += '\n';
}
