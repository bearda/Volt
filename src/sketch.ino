# define ANALOG_INPUT_0 5 
# define RATIO 0.00489
int i;
int pin_reading_0;
int pin_reading_0_sum_of_readings;
int diff;
float output;
int temp;

void setup()
{
    pinMode(ANALOG_INPUT_0,INPUT);
    Serial.begin(9600);
}

void loop()
{
    delay(200);
    pin_reading_0_sum_of_readings = 0;
    for (i=0;i<=10;i++) {
        delay(100);
        temp = analogRead(ANALOG_INPUT_0);
        pin_reading_0_sum_of_readings += analogRead(ANALOG_INPUT_0);
    }
    pin_reading_0 = pin_reading_0_sum_of_readings / i;
    output = pin_reading_0 * RATIO;
    Serial.print(output);
    Serial.println(" Volts");
}
