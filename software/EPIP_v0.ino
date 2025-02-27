//GPS SECTION
#include <TinyGPSPlus.h>    //Use TinyGPS library
TinyGPSPlus gps;           

// Global variables to store GPS data
String gpsTime = "";
double latitude = 0.0;
double longitude = 0.0;
int satellites = 0;
bool gpsFlag = false;  // Flag for lost GPS data

const int UTC_OFFSET_STD = -8;  // UTC Offset for PST (Standard Time)
const int UTC_OFFSET_DST = -7;  // UTC Offset for PDT (Daylight Saving Time)



void setup() {
  //COMMON SECTION
  Serial.begin(115200);  // Monitor Serial

  //GPS SECTION
  Serial1.begin(9600);   // GPS Module Serial (adjust if needed)
}

void loop() {
  // put your main code here, to run repeatedly:
  readGPS();

}


void readGPS() {
  while (Serial1.available()) {
    gps.encode(Serial1.read());  // Process incoming GPS data
  }

  // Update GPS data every 10 seconds
    if (gps.time.isValid()) {
      gpsTime = convertToPacificTime(gps.time.hour(), gps.time.minute(), gps.time.second());
    } else {
      gpsTime = "Invalid";
    }

    if (gps.location.isValid()) {
      latitude = gps.location.lat();
      longitude = gps.location.lng();
    } else {
      latitude = 0.0;
      longitude = 0.0;
    }

    if (gps.satellites.isValid()) {
      satellites = gps.satellites.value();
    } else {
      satellites = 0;
    }

    if (!gps.location.isValid() || !gps.satellites.isValid()) {
    gpsDataLost = true;  // GPS data is lost
  } else {
      gpsDataLost = false; // GPS data is valid

    // Print values to Serial Monitor
    //Serial.println("GPS Data Updated:");
    //Serial.print("Pacific Time: "); Serial.println(gpsTime);
    //Serial.print("Latitude: "); Serial.println(latitude, 6);
    //Serial.print("Longitude: "); Serial.println(longitude, 6);
    //Serial.print("Satellites: "); Serial.println(satellites);
    //Serial.println("----------------------");
}