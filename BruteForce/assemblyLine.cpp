#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int minimum=INT_MAX;
struct Station
{
	int time;
	int traversalCost;
};
int complement(int x)
{
	if(x==1)
		return 0;
	return 1;
		
}
class AssLine
{
	int entryTime;
	int exitTime;
	Station *s;
public:
	AssLine()
	{
	}
	void setStations(Station *X)
	{
		s=X;
	}
	void setEntryExitTime(int x,int y)
	{
		this->entryTime= x;
		this->exitTime= y;
	}
	
	
	friend int solution(AssLine *A,int i,int j,int cost)
	{
		int exitStatus=-1;
		if(j==-1)
		{
			exitStatus=solution(A,0,0,A[0].entryTime);
			if(exitStatus==0)
			{
				solution(A,1,0,A[1].entryTime);
			}
			return 0;		
		}
		if(A[i].s[j].time==-1)
		{
			cost += A[i].exitTime;
			if(cost<minimum)
			{
				minimum=cost;
			}
			return -1;
		}
		
		cost += A[i].s[j].time;
		exitStatus = solution(A,i,j+1,cost);
		

		if(exitStatus==0)
		{
			i=complement(i);
			cost+=A[i].s[j+1].traversalCost;
			solution(A,i,j+1,cost);
		}
		return 0;
	}
};
int main()
{
	
	int numberOfStations=4;//Per Assembly Line
	
	Station * S = new Station[numberOfStations+1];
	Station * T = new Station[numberOfStations+1];
	
	S[0].time=4;
	S[0].traversalCost=0;
	S[1].time=5;
	S[1].traversalCost=9;
	S[2].time=3;
	S[2].traversalCost=2;
	S[3].time=2;
	S[3].traversalCost=8;
	T[0].time=2;
	T[0].traversalCost=0;
	T[1].time=10;
	T[1].traversalCost=7;
	T[2].time=1;
	T[2].traversalCost=4;
	T[3].time=4;
	T[3].traversalCost=5;
	
	S[numberOfStations].time=-1;
	T[numberOfStations].time=-1;

	AssLine A[2];
	A[0].setStations(S);
	A[1].setStations(T);
	
	A[0].setEntryExitTime(10,18);
	A[1].setEntryExitTime(12,7);
	
	solution(A,0,-1,0);
	cout<<"Min time="<<minimum<<endl;
	return 0;
}
