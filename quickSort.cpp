#include "generic.h"

using namespace std;
using namespace alg;

void swap(int k[],int first,int last)
{
	int temp;

	temp = k[first];
	k[first] = k[last];
	k[last] = temp;
}
int partition(int k[],int first,int last)
{
	int point;
	point = k[first];
	while(first<last)
	{
		while(first<last && k[last] >= point)
		{
			last--;
		}
		swap(k,first,last);
		while(first<last && k[first] <= point)
		{
			first++;
		}
		swap(k,first,last);
	}
	return first;
}

void quicksort(int k[], int first, int last)
{
	int point;
	if(first < last)
	{
		point = partition(k,first,last);
		quicksort(k,first,point-1);
		quicksort(k,point+1,last);
	}
}



int main()
{
	int i, a[10] = {5,2,6,0,3,9,1,7,4,8};
	cout<<"排序前list内容为："<<endl;
	printList(a,10);
	quicksort(a,0,9);

	cout<<"排序后的结果是："<<endl;

	/*for(i=0;i<10;++i)
	{
	cout<<a[i]<<endl;
	}*/
	printList(a,10);
}
