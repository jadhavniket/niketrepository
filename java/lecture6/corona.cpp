#include<iostream>
class sars{
	public:
		void lockdown(){
			std::cout<<"Covid-19"<<std::endl;
		}
};
int main(){
	sars corona;
	corona.lockdown();
	return 0;
}
