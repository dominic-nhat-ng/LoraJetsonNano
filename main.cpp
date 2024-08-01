#include "LoRa/Sx1278.h"
#include "LoRa/utils.h"
//#include "wiringJet.h"
#include "iostream"

using namespace std;
#define INT_EDGE_RISING (1)
int counter = 0;

void setup()
{
	cout << "LoRa Sender: " << endl;
	LoRa.setPins(19, 194, 20);

	if(LoRa.begin(433E6,0))
	{
		cout << "LoRa startig failed !!" << endl;
		while(1);
	}	 
}

void loop()
{
	cout << "Sending Packet: ";

	cout << counter << endl;

	LoRa.beginPacket();

	LoRa.print("Hello");
	LoRa.print(counter);

	LoRa.endPacket();

	counter++;
	delay(1000);
}

int main()
{
	setup();
	//while(1) loop();
	return 0;
}
