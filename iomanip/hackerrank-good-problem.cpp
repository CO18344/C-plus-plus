#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        
        cout<<hex<<left<<showbase<<nouppercase;
        cout<<(long long)A<<endl;

        cout<<fixed<<setprecision(2)<<showpos<<right<<setw(15)<<setfill('_');
        cout<<B<<endl;

        cout<<fixed<<setprecision(9)<<noshowpos<<scientific<<uppercase;
        cout<<C<<endl;

        // cout.fill('_');
        // cout.width(15);
        // cout<<ios::fixed<<setprecision(2)<<ios::showpos<<B<<endl;  
        // cout<<setprecision(9)<<ios::scientific<<ios::uppercase<<C<<endl;      

	}
	return 0;

}
