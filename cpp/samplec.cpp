#include<iostream>
class Demo{
	int x=20;
	public:
	int y=200;
	Demo(){
		std::cout<<"In const"<<std::endl;
	}
	Demo(int y){
		std::cout<<"In para"<<std::endl;
			this->y=y;
	}
	void disp(){
		std::cout<<"In disp fun"<<std::endl;
	}
	void disp2(){
		std::cout<<"In disp fun2"<<std::endl;
	}
};
int main(){
	Demo obj1;
	Demo obj2(10);
	obj1.disp();
	obj2.disp2();
}
