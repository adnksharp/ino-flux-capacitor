byte LED[] = {2, 3, 4, 5};
byte i = 0, k = 0, Delay = 100;
short j = 1;

void setup()
{
    for (i = 0; i < 4; i++)
        pinMode(LED[i], OUTPUT);
}

void loop()
{
    for (i = 0; i < 4; i++)
    {
        digitalWrite(LED[i], LOW);
        if (i == k)
            digitalWrite(LED[i], HIGH);
    }
    k += j;
    if (k == 4)
        j = -1;
    else if (k == 0)
        j = 1;
    delay(Delay);
}