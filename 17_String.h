#include<string>
using namespace std;
int index(string S, string T){
	int i = 0;
	int j = 0;
	int sLength, tLength;
	sLength = S.size();
	tLength = T.size();
	while (i <= sLength&&j <= tLength){
		if (S[i] == T[j]){
			i++;
			j++;
		}
		else{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j > tLength){
		return i - tLength;
	}
	else{
		return 0;
	}
	
}