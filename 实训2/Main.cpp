#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
#include<fstream>
#include<vector>
using namespace std;
int main(){
	ifstream cin("Shape.txt");
	vector<Shape*> v;              //创建vector对象 Shape类 v 
	int px1,px2,px3,py1,py2,py3;
	double ra;
	for(char ch;cin>>ch&&ch!='x';)
	  switch(ch){
	  	case'C':cin>>px1>>py1>>ra;
	  	        v.push_back(new Circle(Point(px1,py1),ra));  //在vector容器尾部插入 
	  	        break;
	  	case'R':cin>>px1>>py1>>px2;
	  	        v.push_back(new Rectangle(Point(px1,py1),Point(px2,py2)));
	  	        break; 
	  	case'T':cin>>px1>>py1>>px2>>py2>>px3>>py3;
	  	        v.push_back(new Triangle(Point(px1,py1),Point(px2,py2),Point(px3,py3)));
	  } 
	for(int i=0;i<v.size();i++)
	  v[i]->process();
}
