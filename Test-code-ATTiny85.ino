include "DigiKeyboard.h"

void setup() 
{
        pinMode(1, OUTPUT); //LED on Model A 
}

void loop() 
{
    
        DigiKeyboard.update();
        DigiKeyboard.sendKeyStroke(0);
        DigiKeyboard.delay(3000);
        DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //starts the run dialog box
        DigiKeyboard.delay(100);
        DigiKeyboard.println("notepad.exe"); // this will open notepad.exe
        DigiKeyboard.delay(500);
        DigiKeyboard.println("Hello, this is a test"); // the text will be entered in the notepad      window
        digitalWrite(1, HIGH); //turn on led when program finishes
        DigiKeyboard.delay(90000);
        digitalWrite(1, LOW); 
        DigiKeyboard.delay(5000);
        
}
