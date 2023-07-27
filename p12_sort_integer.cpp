// Design a C++ program to sort integers and floating point
// numbers using template.


#include <iostream>
using namespace std;
template <class X> void bubble(X *items,int count)
{
register int a, b;
X t;
for(a=1; a<count; a++)
for(b=count-1; b>=a; b--)
if(items[b-1] > items[b])
{
    // exchange elements
t = items[b-1];
items[b-1] = items[b];
items[b] = t;

}
}

