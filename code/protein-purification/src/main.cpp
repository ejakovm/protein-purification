#include <Arduino.h>

#define STATE_FILL = 0
#define STATE_WASH = 1
#define STATE_ELUTION = 2

#define SENSOR_PROTEIN_EMPTY = 0
#define SENSOR_COLUMN_FULL = 1
#define SENSOR_COLUMN_EMPTY = 2

#define VALVE_FILL = 0
#define VALVE_WASH = 1
#define VALVE_ELUTION = 2
#define VALVE_DRAIN = 3
#define VALVE_KEEP = 4


int valve_pins[] = {-1,-1,-1,-1,-1};
int state;
bool sensor_state;

void setup() {
  state = 0; 
}

void loop() {
  sensor_state = update_sensors();
}

bool check_level(int* sensor_id){
  return sensor_state[sensor_id];
}

bool update_sensors(){
  bool sensors[false, false, false];
  return sensors;
}

void actuate_valve(bool active, int valve_number){
  digitalWrite(valve_pins[valve_number], active);
}