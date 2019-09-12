#include<iostream>
using namespace std;

struct test
{int x;
 int getz()
 { return z;}
private:
int y;
protected:
int z;
};

int main()
{ struct test t;
cin>>t.getz();
cout<<t.getz();
return 0;
}