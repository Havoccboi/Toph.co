#include<iostream>
#include<cstdio>
using namespace std;


int main () 
{   int n;
    cin>>n;
    int sum=0;
    int num=0;
    while(n--){
        int x;
        num++;
        cin>>x;
        sum+=x;
        printf("%.5f\n",(float)sum/num);

    }

    return 0;
}
