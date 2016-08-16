/*************************************************************************
    > File Name: main.cpp
    > Author: hzyan
    > Mail: yan_haizhou@126.com 
    > Created Time: 2016年08月13日 星期六 13时36分00秒
    > File Describle: main.cpp
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;

#include"func.h"
#include"testf.h"

int main()
{
	printf("hello main !\n");

	
    cout<<"main call f1"<<endl;
	f1();
    cout<<"main call fxx"<<endl; 
	fxx();
	return 0;
}
