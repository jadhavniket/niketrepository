#include <iostream>
class SARS{
	public:
		void lockdown(){
			std::cout<<"COVID-19"<<std::endl;
			std::cout<<obj;
		}

};
int main(){
	SARS obj;
	obj.lockdown();
	return 0;
}
