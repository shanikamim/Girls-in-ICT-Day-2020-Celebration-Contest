#include<iostream>
#include<string>

using namespace std;

int main()

{
    string a;
    while(getline(cin,a)){

        for(int i=0; i<a.size(); i++){
           if(a[i]=='B' || a[i]=='F'|| a[i]=='P' || a[i]=='V'){
                 if(a[i-1]!='B' && a[i-1]!='F' && a[i-1]!='P' && a[i-1]!='V')
                    cout<<"1";
            }
            if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z'){
                 if(a[i-1]!='C' && a[i-1]!='G' && a[i-1]!='J' && a[i-1]!='K'&& a[i-1]!='Q'&& a[i-1]!='S' && a[i-1]!='X' && a[i-1]!='Z')
                    cout<<"2";
            }
            if (a[i]=='D' || a[i]=='T'){
                 if(a[i-1]!='D' && a[i-1]!='T')
                    cout<<"3";
            }
            if (a[i]=='L'){
                 if(a[i-1]!='L')
                    cout<<"4";
            }
            if (a[i]=='M' || a[i]=='N'){
                 if(a[i-1]!='M' && a[i-1]!='N')
                    cout<<"5";
            }
            if (a[i]=='R'){
                 if(a[i-1]!='R')
                    cout<<"6";
            }

        }


        cout<<"\n";

    }
    return 0;
}

