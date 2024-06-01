include "DigiKeyboard.h"

void setup() 
{
        pinMode(1, OUTPUT); //LED on Model A 
}

void loop() 
{
    
        DigiKeyboard.update(); //updating the device with new code
        DigiKeyboard.sendKeyStroke(0); //0 key is entered to make sure the device is working correctly
        DigiKeyboard.delay(3000); //3000 milliseconds of delay
        DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //starts the run dialog box
        DigiKeyboard.delay(100); //100 milliseconds of delay
        DigiKeyboard.println("notepad.exe"); // this will open notepad.exe
        DigiKeyboard.delay(500); //500 milliseconds of delay
        DigiKeyboard.println("Hello, this is a test"); // the text will be entered in the new notepad window
        digitalWrite(1, HIGH); //turn on led when program finishes
        DigiKeyboard.delay(90000); //90000 milliseconds of delay
        digitalWrite(1, LOW); //turn off led after some time
        DigiKeyboard.delay(5000); //5000 milliseconds of delay, the program loops until the device is disconnected
        
}
