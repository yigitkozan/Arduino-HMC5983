# Arduino-HMC5983

The HMC5983 is a Magnetometer from Honeywell, with an update rate up to 220Hz in difference with HMC5883L which is only up to 75Hz.
You have all the information about this device on the datasheet

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/HMC5983_3_Axis_Compass_IC.pdf

This library is based on two libs
* `Arduino-HMC5883L` https://github.com/aberope/Arduino-HMC5883L
* `Proof of concept Arduino library,  for the HMC5983` https://github.com/aberope/HMC5983

Heading calculation is done correctly by following the PDF, and it's corrected from original proof-of-concepto library.

* http://www51.honeywell.com/aero/common/documents/myaerospacecatalog-documents/Defense_Brochures-documents/Magnetic__Literature_Application_notes-documents/AN203_Compass_Heading_Using_Magnetometers.pdf

About the `Arduino-HMC5883L` library I can only say, did all the job.

It works in countinous mode and normal, and has implemented the corresponding configuration rates and gain.
You can setup an interrupt to `DRDY` by passing an argument to `compass.begin(callback);`

Here is an output of the burnt example

```
heading=26.5650560000, ms=4
heading=26.5650560000, ms=4
heading=26.5650560000, ms=4
heading=25.3879090000, ms=4
heading=26.1752890000, ms=4
heading=26.9657170000, ms=4
heading=25.7693330000, ms=4
heading=26.5650560000, ms=4
heading=25.7693330000, ms=4
heading=25.7693330000, ms=4
heading=25.7693330000, ms=4
heading=25.7693330000, ms=4
```

`ms` is the time between one value read and the next.

Have fun and good building!
