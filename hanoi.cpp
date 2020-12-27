#include <iostream>
#include <vector>

using namespace std;

vector<int> number;

int mak(int l){
	if (l < 1){
		
		return 1;
	}
       
	else{
		return 2*mak(l-1);
	}
}

int main()
{
	int n;
	cout << "Type the number of discs for playing hanoi " << endl;
	cin >> n; 
	 

	for (int i = 0; i < n; i++) 
	{
		number.push_back(i+1);
	}
	if(n%2==0){
		int k=0;
		while(k<mak(n)-1){
		if(k<mak(n)-1){
			cout <<"step" <<  k + 1 <<":"   <<"pick disc from 1 t0 2 or reverse"<< endl; k++;
			}
		if(k<mak(n)-1){
			cout <<"step" <<  k + 1 <<":"   <<"pick disc from 1 to 3 or reverse"<< endl; k++;
			}
		if(k<mak(n)-1){
			cout <<"step" <<  k + 1 <<":"   <<"pick disc from 2 to 3 or reverse"<< endl; k++;
			}
		}
	}
		
		
	
	else{
		int s=0;
		while(s<mak(n)-1){
		if(s<mak(n)-1){
			cout <<"step" <<  s + 1 <<":"   <<"pick disc from 1 t0 3 or reverse"<< endl; s++;
			}
		if(s<mak(n)-1){
			cout <<"step" <<  s + 1 <<":"   <<"pick disc from 1 to 2 or reverse"<< endl; s++;
			}
		if(s<mak(n)-1){
			cout <<"step" <<  s + 1 <<":"   <<"pick disc from 2 to 3 or reverse"<< endl; s++;
			}
		}
	}
		
	


		return 0;
}
