#include"string_project.h"
int main(){
	String s1,s2,s3;
	cout<<"enter the first string:\n";
	cin>>s1;
	cout<<"enter the second string:\n";
	cin>>s2;
	s3=s1+s2;
	strrev(s3);
	cout<<s3<<endl;
  }
