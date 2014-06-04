#ifndef _GENERIC_H_
#define _GENERIC_H_

#include<iostream>
#include<assert.h>

#define Max(a,b) ( (a>b)?a:b)
#define Min(a,b) ( (a<b)?a:b)

#define RANDOM_INIT() srand(time(NULL))
#define RANDOM(L,R) (L+rand()%((R)-(L)))

namespace alg{
	//swap 2 elements
	template <typename T>
	static inline void swap(T &x,T &y)
	{
		T _t(x);
		x=y;
		y= _t;
	}

	//print all elements in list with size n.
	template<typename T>
	static void printList(T &list,int count)
	{
		int i;
		for(i=0;i<count;i++)
		{
			cout<<list[i]<<endl;
		}
	}


}

#endif