# Arduino-HMC5983

The HMC5983 is a Magnetometer from Honeywell, with an update rate up to 220Hz in difference with HMC5883L which is only up to 75Hz.
You have all the information about this device on the datasheet

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/HMC5983_3_Axis_Compass_IC.pdf

This library is based on the `Arduino-HMC5883L` library for Arduino from `Github`, and a `Proof of concept Arduino library,  for the HMC5983` device.

Heading calculation is done correctly by following the PDF, and it's corrected from original proof-of-concepto library.

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/Magnetic__Literature_Application_notes-documents/AN203_Compass_Heading_Using_Magnetometers.pdf

About the `Arduino-HMC5883L` library I can only say, did all the job.

It works in countinous mode and normal, and has implemented the corresponding configuration rates and gain.
You can setup an interrupt to `DRDY` by passing an argument to `compass.begin(callback);`

Have fun and good building!
