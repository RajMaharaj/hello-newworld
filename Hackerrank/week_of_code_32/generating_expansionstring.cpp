#include <bits/stdc++.h>
#include <bitset>
#include <string>

using namespace std;
char flip(char c) {return (c == '0')? '1': '0';}
main()
{


    string bin = "";
bin="01";
int n = bin.length();
    int i;
 
    string ones, oness,one;
    ones = oness= one= "";

 
 oness= "01";
 for (int j = 0;  j< 9; j++)
{
one="";   
for (i = 0; i < oness.length(); i++)
{

        one = one+ flip(oness[i]);
//cout<<one<<endl;

}
//oness="";
oness = oness+one;
}
    //cout << "1's complement: " << one << endl;
cout<<oness;
}
