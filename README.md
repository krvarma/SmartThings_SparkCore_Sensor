Spark Core and SmartThings
--------------------------

This is a sample application using [Spark Core][1] and [SmartThings][2]. 

The Spark Core application uses DHT22 Temperature and Humidity Sensor to read the Temperateure and Humidity value. Tha application defines two Spark.function to read temperature and humidity.

The SmartThings application defines a new Device Type and uses Spark Core APIs to read the sensor values. The device type specifies the "Polling" capability but only sometimes it is working (Raised the issue and I am awaiting SmartThings reply on this)

**Installation**

1. Create a new device type (https://graph.api.smartthings.com/ide/devices)
        Name: Spark Core Temperature Sensor
        Author: Krishnaraj Varma
        Capabilities: Polling, Relative Humidity Measurement, Sensor, Temperature Measurement

2. Create a new device (https://graph.api.smartthings.com/device/list)
        Name: Your Choice
        Device Network Id: Your Choice
        Type: Spark Core Temperature Sensor (should be the last option)
        Location: Choose the correct location
        Hub/Group: Leave blank

3. Update device preferences
        Click on the new device to see the details. Click the edit button next to Preferences and Enter the Device ID and Access Token

4. Open the Mobile Application and add the newly created device, click refresh to see the Temperature and Humidity values

**Screenshots**

**Reference and Inspiration**

https://gist.github.com/Dianoga/6055918


  [1]: https://www.spark.io/
  [2]: http://www.smartthings.com/