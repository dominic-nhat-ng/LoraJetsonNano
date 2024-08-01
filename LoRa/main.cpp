#include <iostream>
#include "Sx1278.h"
#include <stdio.h>

// LoRa set pin respective (NSS, RESET, DIO0)

int counter = 0;
void setup() {

  printf("LoRa Sender\n");
  LoRa.setPins(24, 3, 5);
  
  if (!LoRa.begin(433E6, 0)) {
    printf("Starting LoRa failed!\n");
    while (1);
  }
}

void loop() {
   printf("Sending packet: ");
   printf("%d\n",counter);

  // send packet
  LoRa.beginPacket();
  LoRa.print("hello ");
  LoRa.print(counter);
  LoRa.endPacket();
  counter++;

  delay(5000);
}


int  main(void) {
   setup();
   while(1) loop();
}

