#include"iostream"
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Array Size: "<<endl;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int num=0;
    cout<<"What is the Sum: "<<endl;
    cin>>num;
    for(i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]+ar[j]==num)
            {
                
                if(ar[i]!=ar[j])
                {
                    cout<<"{"<<ar[i]<<","<<ar[j]<<"}";
                    cout<<endl;
                }
            }
        }
    }
}
