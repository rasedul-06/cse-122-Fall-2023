#include<bits/stdc++.h>
            using namespace std;
        int main()
        {
            int test,g=0,a,b,c;
            cin>>test;
            while(test--)
            {
                cin>>a>>b>>c;
                if(a==1&&b==1||b==1&&c==1||a==1&&c==1)
                    g++;
            }
                cout<<g;
                return 0;  
                  }