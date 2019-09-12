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
int d;
d=t.getz();
cin>>d;
cout<<d;
return 0;
}