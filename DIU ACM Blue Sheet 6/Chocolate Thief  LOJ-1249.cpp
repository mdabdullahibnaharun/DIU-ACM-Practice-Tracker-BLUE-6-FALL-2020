#include<bits/stdc++.h>
using namespace std;

#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define PI acos(-1.0)
#define endl '\n'
#define TRUE 1
#define FALSE 0
#define lli   long long int
#define ull  unsigned long long
typedef long long ll ;


class peoples{
    public:
    int sum;
    string name;
    peoples(string n,int s){
        name = n;
        sum = s;
    }
};
bool comp(peoples p1,peoples p2)
{
    return p1.sum < p2.sum ;
}

int main(){
    int test;
    string name;
    int l,w,h;
    int person;

    vector <peoples> pe;

    scanf("%d",&test);

    for(int i = 1 ; i <= test ; i++){

        scanf("%d",&person);

        for(int j = 0 ; j < person ; j++){

            cin>>name>>l>>w>>h;
            pe.push_back(peoples(name,l*w*h));

        }

        sort(pe.begin(),pe.end(),comp);

        /*
        for(auto p : pe){
            cout<<p.name<<" "<<p.sum<<endl;
        }

        */

        if(pe[0].sum == pe[pe.size()-1].sum){
            cout<<"Case "<<i<<": no thief"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<pe[pe.size()-1].name<<" took chocolate from "<<pe[0].name<<endl;
        }

        pe.clear();
    }

    return 0;

}
