#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char name[5][20];
    int mark[5][3];
    int sum=0;
    int total[5];
    double avg[5];
    int top=0;
            for(int j=0;j<5;j++)
                {
    cout<<"please enter student name "<<":";
                
                    cin.getline(name[j],20);
                }
    for(int i=0;i<5;i++)
        {
            cout<<"please enter marks of "<<name[i]<<":"<<endl;
            for(int j=0;j<3;j++)
                {
                    cin>>mark[i][j];
                    sum=sum+mark[i][j];
                }
            total[i]=sum;
            avg[i]=sum/3.0;
            sum=0;
if (i == 0 || avg[i] > avg[top]) 
{
    top = i;
}
        }
    
      cout<<setw(18)<<left<<"Name"<<setw(6)<<right<<"M1"<<setw(6)<<right<<"M2"<<setw(6)<<right<<"M3"<< setw(8)<<right<<"  total"<<setw(12)<<"avg"<<endl;
            
        cout<<setw(18)<<left<<name[0]<<setw(6)<<right<<mark[0][0]<<setw(6)<<right<<mark[0][1]<<setw(6)<<right<<mark[0][2]<< setw(8)<<right<<total[0]<<setw(12)<<right<<avg[0]<<endl;
            
            cout<<setw(18)<<left<<name[1]<<setw(6)<<right<<mark[1][0]<<setw(6)<<right<<mark[1][1]<<setw(6)<<right<<mark[1][2]<< setw(8)<<right<<total[1]<<setw(12)<<right<<avg[1]<<endl;
            
 cout<<setw(18)<<left<<name[2]<<setw(6)<<right<<mark[2][0]<<setw(6)<<right<<mark[2][1]<<setw(6)<<right<<mark[2][2]<< setw(8)<<right<<total[2]<<setw(12)<<right<<avg[2]<<endl;
            
     cout<<setw(18)<<left<<name[3]<<setw(6)<<right<<mark[3][0]<<setw(6)<<right<<mark[3][1]<<setw(6)<<right<<mark[3][2]<< setw(8)<<right<<total[3]<<setw(12)<<right<<avg[3]<<endl;
            
cout<<setw(18)<<left<<name[4]<<setw(6)<<right<<mark[4][0]<<setw(6)<<right<<mark[4][1]<<setw(6)<<right<<mark[4][2]<< setw(8)<<right<< total[4]<<setw(12)<<right<<avg[4]<<endl; 
    cout<<"Top student: "<<name[top]<<endl;
    return 0;
}
