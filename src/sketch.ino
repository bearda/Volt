# define ANALOG_INPUT_0 5 
# define ANALOG_INPUT_1 4 
# define RATIO 0.00489
int pin_reading_0;
int pin_reading_1;
int diff;
float output;

void setup()
{
    pinMode(ANALOG_INPUT_0,INPUT);
    pinMode(ANALOG_INPUT_1,INPUT);
    Serial.begin(9600);
}

void loop()
{
    delay(2000);
    Serial.println("Reading voltage...");
    pin_reading_0 = analogRead(ANALOG_INPUT_0);
    pin_reading_1 = analogRead(ANALOG_INPUT_1);
    Serial.println(pin_reading_0);
    Serial.println(pin_reading_1);
    Serial.println("Comparing values...");
    diff = pin_reading_0 - pin_reading_1;
    Serial.println("Done!");
    Serial.println("Preparing output...");
    output = diff * RATIO;
    Serial.print(output);
    Serial.println(" Volts");
}
