# name
- mBotArudino

## Overview
- Arudino program to control mBot.
- [mBot](https://www.makeblock.com/pages/mbot-robot-kit)

## Requirement
- mBot
- Windows10 Pro
- Arudino IDE 2.1.0
    - Download and install  [arduino-ide_2.1.0_Windows_64bit.exe](https://www.arduino.cc/en/software).
- CH340 driver 
    - Download and install CH340 driver required by mCore.
    - [CH340](http://www.wch-ic.com/downloads/CH341SER_EXE.html).
- Makeblock library
    - Download zip and install [Makeblock library](https://github.com/Makeblock-official/Makeblock-Libraries).
    - Launch Arudino IDE.
    - In the menu Sketch -> Include Library -> Add Zip Library, specify the zip you obtained.

## Usage
- Launch Arudino IDE.
- Turn on the mBot.
- Open the target program.
- Select Arudino IDE -> Tools -> Board -> Arudino Nano.
- Arudino IDE -> Tools -> COM -> this time select COM5.
- Click "Upload" button.

## Features
- RGBLed.ino
    - Left and right LEDs are turned on at 500ms intervals according to random values.
- UltrasonicRGBLed.ino
    - Using an infrared sensor to activate the function of LED lighting when smaller than 50 cm.
    - Left and right LEDs are turned on at 500ms intervals according to random values.
- Move.ino
    - Move by Motors.
- PushButtonMove.ino
    - Move by Button.
- Melody.ino
    - The sound output.

## Reference
- [Program mBot in Arduino IDE](https://support.makeblock.com/hc/en-us/articles/4419572961943-Program-mBot-in-Arduino-IDE)
- [音の出力](http://maicommon.ciao.jp/ss/Arduino_g/sound/index.htm)

## Author
- superbunnbun

## Licence
[MIT](https://github.com/superbunnbun/mBotArudino/blob/main/LICENSE)