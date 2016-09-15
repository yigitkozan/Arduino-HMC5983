# Arduino-HMC5983

This library is a mix of the `Arduino-HMC5883L` library for Arduino from `Github`, and a `Proof of concept Arduino library,  for the HMC5983` device. And ofcourse the Datasheet you can find here:

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/HMC5983_3_Axis_Compass_IC.pdf

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/Magnetic__Literature_Application_notes-documents/AN203_Compass_Heading_Using_Magnetometers.pdf

I uploaded to keep it after some work on it and discover I need a gyroscope instead of a compass for my RPA.

It works in countinous mode and normal, and has implemented the corresponding configuration rates and gain.
You can setup an interrupt to `DRDY` by passing an argument to `compass.begin(callback);`

Have fun and good building!
