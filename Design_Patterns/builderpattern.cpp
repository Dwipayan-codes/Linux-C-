#include<iostream>
#include<string>

using namespace std;

//Product class
class Computer{
	public:
	   string cpu;
	   string ram;
	   string storage;
	   bool bluetooth = false;
	   bool wifi = false;

	   void show()
	   {
	   	  cout << cpu << endl;
	   	  cout << ram << endl;
	   	  cout << storage << endl;
	   }	
};

//Builder class
class ComputerBuilder{
	Computer computer;

	public:
		ComputerBuilder& setCPU(string cpu){
			computer.cpu = cpu;

			return *this;
		}	

		ComputerBuilder& setRAM(string ram){
			computer.ram = ram;

			return *this;
		}

		ComputerBuilder& setStorage(string storage){
			computer.storage = storage;

			return *this;
		}

		ComputerBuilder& setBluetooth(bool bluetooth)
		{
			computer.bluetooth = bluetooth;

			return *this;
		}

		Computer build()
		{
			return computer;
		}
};


int main()
{
    Computer c = ComputerBuilder().setCPU("Intel I7").setRAM("32GB").
                 setStorage("1TB").setBluetooth(true).build();

    c.show();
  
	return 0;
}
