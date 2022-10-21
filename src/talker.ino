#include <M5Stack.h>
#undef ESP32
#include <ros.h>
#include <std_msgs/String.h>

ros::NodeHandle nh;
std_msgs::String msg;
ros::Publisher pub("chatter", &msg);
int count = 0;

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  nh.initNode();
  nh.advertise(pub);
  while(!nh.connected()){
    nh.spinOnce();
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  M5.update();
  msg.data = "Hello, World!";
  count += 0;
  pub.publish(&msg);
  nh.spinOnce();
  delay(30);
}