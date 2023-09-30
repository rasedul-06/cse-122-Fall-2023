#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int k,n,w,cnt=0;  cin>>k>>n>>w;
            for(int i=0; i<=w; i++)
            {
                cnt=cnt+i*k;
            }
     
            if(cnt>n)
            {
                cout<<cnt-n<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
     
            return 0;
        }