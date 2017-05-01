#include <iostream>
using namespace std;
#include <string>
int main() {
	string T,M;
	int r,s=0,I=0;
	cout<<"T=";cin>>T;
	cout<<"I=";cin>>I;
	cout<<"M=";cin>>M;
	if(M.size()%6!=0)return 0;
	do {
		cout<<T<<endl;
		for(int i=0;i<I;++i) cout<<" ";
		cout<<"^"<<s+1<<endl;
		r=T[I]-'0';
		T[I]=M[s*6+r*3+0];
		I+=(M[s*6+r*3+1]-'0')*2-1;
		s=M[s*6+r*3+2]-'0'-1;
	} while(s>=0&&I>=0&&I<T.size()&&s<M.size());
	cout<<T<<endl;
	for(int i=0;i<I;++i) cout<<" ";
	cout<<"^"<<s+1<<endl;
}

// #define n m[s*6+r*3+
// #define z(x)#x
// #define l(x)cout<<z(x);cin>>x;
// #include <iostream>
// #include <string>
// using namespace std;
// string t,m;int r,s,i;
// int main(){l(t)l(i)l(m)
// if(m.size()%6!=0)return 0;
// do{cout<<t<<endl;for(int o=0;o<i;++o)cout<<" ";
// cout<<"^"<<s+1<<endl;r=t[i]-48;t[i]=n 0];i+=n
// 1]*2-97;s=n 2]-49;}while(s>=0&&s<m.size()&&i
// >=0&&i<t.size());}
