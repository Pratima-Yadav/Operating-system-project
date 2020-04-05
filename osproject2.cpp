#include<iostream> 
using namespace std;
int main() 
{ 
/*waiting time=wt;
turnround time=tt;
arrival time=at;
time quantum=tq;
burst time = bt;*/
  int i,j,n;
  int time,remaining;
  int flag=0,tq=10; 
  int wt=0,tt=0,at[10],bt[10],rt[10]; 
  cout<<"\n\nEnter the Total number of Process: "<<endl; 
  cin>>n; 
  remaining=n; 
  for(i=0;i<n;i++) 
  { 
    cout<<"Enter Arrival Time and Burst Time for Process"<<i+1<<endl; 
    cin>>at[i]; 
    cin>>bt[i]; 
    rt[i]=bt[i]; 
  } 
  cout<<"Enter Time Quantum:"<<tq<<endl; 
 
  cout<<"Process\t|Turnaround Time|Waiting Time"<<endl; 
  for(time=0,i=0;remaining!=0;) 
  { 
    if(rt[i]<=tq && rt[i]>0) 
    { 
      time+=rt[i]; 
      rt[i]=0; 
      flag=1; 
    } 
    else if(rt[i]>0) 
    { 
      rt[i]-=tq; 
      time+=tq; 
    } 
