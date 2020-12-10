# EmbeddedSystemII
Embedded systems II

## Reed Switch KY - 025
Reed Switch KY - 025

## Code - Reed Switch KY - 025

<pre>
<font color="#00979c">int</font> <font color="#000000">led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define the LED pin</font>
<font color="#00979c">int</font> <font color="#000000">digitalPin</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; KY-025 digital interface</font>
<font color="#00979c">int</font> <font color="#000000">analogPin</font> <font color="#434f54">=</font> <font color="#000000">A0</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; KY-025 analog interface</font>
<font color="#00979c">int</font> <font color="#000000">digitalVal</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; digital readings</font>
<font color="#00979c">int</font> <font color="#000000">analogVal</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;analog readings</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">digitalPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47;pinMode(analogPin, OUTPUT);</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; Read the digital interface</font>
 &nbsp;<font color="#000000">digitalVal</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">digitalPin</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">digitalVal</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; if magnetic field is detected</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; turn ON Arduino&#39;s LED</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; turn OFF Arduino&#39;s LED</font>
 &nbsp;<font color="#000000">}</font>

 &nbsp;<font color="#434f54">&#47;&#47; Read the analog interface</font>
 &nbsp;<font color="#000000">analogVal</font> <font color="#434f54">=</font> <font color="#d35400">analogRead</font><font color="#000000">(</font><font color="#000000">analogPin</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">analogVal</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; print analog value to serial</font>

 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
## Video - Reed Switch KY - 025

[![Watch the video](https://img.youtube.com/vi/J1JIEfZUEMg/maxresdefault.jpg)](https://youtu.be/J1JIEfZUEMg)


## Passive Buzzer KY - 006
Passive Buzzer KY - 006

## Code - Passive Buzzer KY - 006

<pre>
<font color="#434f54">&#47;&#47; define the pin we will connect to</font>
<font color="#00979c">int</font> <font color="#000000">buzzer</font> <font color="#434f54">=</font> <font color="#000000">12</font> <font color="#000000">;</font> 
 &nbsp;
<font color="#00979c">void</font> <font color="#5e6d03">setup</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; set our pin to output mode</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">buzzer</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font> <font color="#000000">;</font>
<font color="#000000">}</font>
 &nbsp;
 &nbsp;
<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; loop through frequencies to generate alarm sound</font>
 &nbsp;<font color="#00979c">unsigned</font> <font color="#00979c">char</font> <font color="#000000">i</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Frequency 1</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font><font color="#000000">80</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font> 
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzer</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzer</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Frequency 2</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font><font color="#000000">100</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font> 
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzer</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">2</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzer</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">2</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Code - Passive Buzzer KY - 006

[![Watch the video](https://img.youtube.com/vi/zVmLQ4d6fwc/maxresdefault.jpg)](https://youtu.be/zVmLQ4d6fwc)

## Active Buzzer Module KY - 012
Active Buzzer Module KY - 012

## Code - Active Buzzer Module KY - 012

<pre>
<font color="#00979c">int</font> <font color="#000000">buzzerPin</font> <font color="#434f54">=</font> <font color="#000000">8</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Active Buzzer Module KY - 012

[![Watch the video](https://img.youtube.com/vi/8FQvt4dKiAs/maxresdefault.jpg)](https://youtu.be/8FQvt4dKiAs)

## Photo Interrupter Module KY - 010
Photo Interrupter Module KY - 010

## Code - Photo Interrupter Module - 010

<pre>
<font color="#00979c">int</font> <font color="#000000">Led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define LED pin</font>
<font color="#00979c">int</font> <font color="#000000">buttonpin</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define photo interrupter signal pin</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;define a numeric variable</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; LED pin as output</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buttonpin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;photo interrupter pin as input</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">buttonpin</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;read the value of the sensor</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; turn on LED when sensor is blocked</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Photo Interrupter Module KY - 010

[![Watch the video](https://img.youtube.com/vi/by2LKrGd44s/maxresdefault.jpg)](https://youtu.be/by2LKrGd44s)

## Mini Magnetic Reed Switch Module KY - 021
Mini Magnetic Reed Switch Module - 021

## Code - Mini Magnetic Reed Switch Module - 021

<pre>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">pinoLed</font> <font color="#434f54">=</font> <font color="#000000">12</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO LED</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">pinoSensor</font> <font color="#434f54">=</font> <font color="#000000">8</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO SENSOR</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoSensor</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO ENTRADA</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO SAÍDA</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;LED INICIA DESLIGADO</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">pinoSensor</font><font color="#000000">)</font> <font color="#434f54">==</font> <font color="#00979c">LOW</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#434f54">&#47;&#47;SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;ACENDE O LED</font>
 &nbsp;<font color="#000000">}</font> <font color="#5e6d03">else</font> <font color="#000000">{</font> <font color="#434f54">&#47;&#47;SENÃO, FAZ</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;APAGA O LED</font>
 &nbsp;<font color="#000000">}</font>

</pre>


## Video - Mini Magnetic Reed Switch Module - 021

[![Watch the video](https://img.youtube.com/vi/s01sT55KoYg/maxresdefault.jpg)](https://youtu.be/s01sT55KoYg)

## Tap Module KY - 031
Tap Module KY - 031

## Code - Tap Module KY - 031

<pre>
<font color="#00979c">int</font> <font color="#000000">Led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; LED on Arduino board</font>
<font color="#00979c">int</font> <font color="#000000">Shock</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; sensor signal</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; numeric variable to store sensor status</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; define LED as output interface</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">Shock</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; define input for sensor signal</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">Shock</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; read and assign the value of digital interface 3 to val</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; when sensor detects a signal, the LED flashes</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Tap Module KY - 031

[![Watch the video](https://img.youtube.com/vi/zRITETRAVTo/maxresdefault.jpg)](https://youtu.be/zRITETRAVTo)


## Two color led module ky-011(hw-480)
Two color led module ky-011(hw-480)

## Code - Two color led module ky-011(hw-480)

<pre>
<font color="#00979c">int</font> <font color="#000000">redpin</font> <font color="#434f54">=</font> <font color="#000000">11</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; pin for red signal</font>
<font color="#00979c">int</font> <font color="#000000">greenpin</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; pin for green signal</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">redpin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">greenpin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">=</font> <font color="#000000">255</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">&gt;</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">val</font><font color="#434f54">--</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">redpin</font><font color="#434f54">,</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;dim red</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">greenpin</font><font color="#434f54">,</font> <font color="#000000">255</font> <font color="#434f54">-</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; brighten green</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">15</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">&lt;</font> <font color="#000000">255</font><font color="#000000">;</font> <font color="#000000">val</font><font color="#434f54">++</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">redpin</font><font color="#434f54">,</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;brighten red</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">greenpin</font><font color="#434f54">,</font> <font color="#000000">255</font> <font color="#434f54">-</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;dim green</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">15</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>


## Video - Two color led module ky-011(hw-480)

[![Watch the video](https://img.youtube.com/vi/_MWUV_L_CHI/maxresdefault.jpg)](https://youtu.be/_MWUV_L_CHI)


## Laser Transmitter Module KY-008
Laser Transmitter Module KY-008

## Code - Laser Transmitter Module KY-008

<pre>
<font color="#00979c">int</font> <font color="#000000">laserPin</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">laserPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Define the digital output interface pin 13</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">laserPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Open the laser head</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Delay one second</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">laserPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Close the laser head</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Laser Transmitter Module KY-008

[![Watch the video](https://img.youtube.com/vi/7e5Htg6cank/maxresdefault.jpg)](https://youtu.be/7e5Htg6cank)


## Magic Light Cup Module KY-027
Magic Light Cup Module KY-027

## Code - Magic Light Cup Module KY-027

<pre>
<font color="#00979c">int</font> <font color="#000000">Led</font> <font color="#434f54">=</font> <font color="#000000">13</font> <font color="#000000">;</font><font color="#434f54">&#47;&#47; Declaration of the LED-output pin</font>
<font color="#00979c">int</font> <font color="#000000">Sensor</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Declaration of the sensor input pin</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Temporary variable</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font> <font color="#000000">;</font> <font color="#434f54">&#47;&#47; Initialization output pin</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">Sensor</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font> <font color="#000000">;</font> <font color="#434f54">&#47;&#47; Initialization sensor pin</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Sensor</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Activating of the internal pull-up resistor</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font> <font color="#000000">(</font><font color="#000000">Sensor</font><font color="#000000">)</font> <font color="#000000">;</font> <font color="#434f54">&#47;&#47; The current signal from the sensor will be read</font>

 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; If a signal will be detected, the LED will light up.</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Magic Light Cup Module KY-027

[![Watch the video](https://img.youtube.com/vi/XW75s2KHlpI/maxresdefault.jpg)](https://youtu.be/XW75s2KHlpI)

## Flame Sensor Module KY-026
Flame Sensor Module KY-026

## Code - Flame Sensor Module KY-026

<pre>
<font color="#00979c">int</font> <font color="#000000">led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define the LED pin</font>
<font color="#00979c">int</font> <font color="#000000">digitalPin</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; KY-026 digital interface</font>
<font color="#00979c">int</font> <font color="#000000">analogPin</font> <font color="#434f54">=</font> <font color="#000000">A0</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; KY-026 analog interface</font>
<font color="#00979c">int</font> <font color="#000000">digitalVal</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; digital readings</font>
<font color="#00979c">int</font> <font color="#000000">analogVal</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;analog readings</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">digitalPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47;pinMode(analogPin, OUTPUT);</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; Read the digital interface</font>
 &nbsp;<font color="#000000">digitalVal</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">digitalPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">digitalVal</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; if flame is detected</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; turn ON Arduino&#39;s LED</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; turn OFF Arduino&#39;s LED</font>
 &nbsp;<font color="#000000">}</font>

 &nbsp;<font color="#434f54">&#47;&#47; Read the analog interface</font>
 &nbsp;<font color="#000000">analogVal</font> <font color="#434f54">=</font> <font color="#d35400">analogRead</font><font color="#000000">(</font><font color="#000000">analogPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">analogVal</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; print analog value to serial</font>

 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Flame Sensor Module KY-026

[![Watch the video](https://img.youtube.com/vi/QOse_3NUzKg/maxresdefault.jpg)](https://youtu.be/QOse_3NUzKg)


## Infrared Obstacle Avoidance Sensor Module KY-032 
Infrared Obstacle Avoidance Sensor Module KY-032 

## Code - Infrared Obstacle Avoidance Sensor Module KY-032

<pre>
<font color="#00979c">int</font> <font color="#000000">ledPin</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED pin on arduino</font>
<font color="#00979c">int</font> <font color="#000000">detectorPin</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; obstacle avoidance sensor interface</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; variable to store result</font>
<font color="#434f54">&#47;&#47;int enablePin = 2; &nbsp;&#47;&#47; sensor enable interface (EN)</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Define LED as output interface</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">detectorPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Define obstacle avoidance sensor as input interface</font>

 &nbsp;<font color="#434f54">&#47;&#47; [uncomment and remove jumper on module to use enable pin (EN)]</font>
 &nbsp;<font color="#434f54">&#47;&#47;pinMode(enablePin, OUTPUT);</font>
 &nbsp;<font color="#434f54">&#47;&#47;digitalWrite(enablePin, HIGH); &nbsp;&#47;&#47; Enable sensor</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">detectorPin</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Read value from sensor</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">LOW</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; When the sensor detects an obstacle, the LED on the Arduino lights up</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Infrared Obstacle Avoidance Sensor Module KY-032

[![Watch the video](https://img.youtube.com/vi/UYdbnZCY8kA/maxresdefault.jpg)](https://youtu.be/UYdbnZCY8kA)


## RGB LED SMD Module KY-009
RGB LED SMD Module KY-009

## Code - RGB LED SMD Module KY-009

<pre>
<font color="#00979c">int</font> <font color="#000000">pinoRed</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO TERMINAL VERMELHO</font>
<font color="#00979c">int</font> <font color="#000000">pinoGreen</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO TERMINAL VERDE</font>
<font color="#00979c">int</font> <font color="#000000">pinoBlue</font> <font color="#434f54">=</font> <font color="#000000">11</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO TERMINAL AZUL</font>
 
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;VARIÁVEL DO TIPO INTEIRA</font>
 
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoRed</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO SAÍDA</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoBlue</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO SAÍDA</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoGreen</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO SAÍDA</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">=</font> <font color="#000000">255</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">&gt;</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">--</font><font color="#000000">)</font><font color="#000000">{</font> <font color="#434f54">&#47;&#47;PARA val IGUAL A 255, ENQUANTO val MAIOR QUE 0, DECREMENTA val</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoRed</font><font color="#434f54">,</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoBlue</font><font color="#434f54">,</font> <font color="#000000">255</font><font color="#434f54">-</font><font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoGreen</font><font color="#434f54">,</font> <font color="#000000">128</font><font color="#434f54">-</font><font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">10</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;INTERVALO DE 10 MILISSEGUNDOS</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">&lt;</font> <font color="#000000">255</font><font color="#000000">;</font> <font color="#000000">val</font> <font color="#434f54">++</font><font color="#000000">)</font><font color="#000000">{</font> <font color="#434f54">&#47;&#47;PARA val IGUAL A 0, ENQUANTO val MENOR QUE 255, INCREMENTA val</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoRed</font><font color="#434f54">,</font> <font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoBlue</font><font color="#434f54">,</font> <font color="#000000">255</font><font color="#434f54">-</font><font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">pinoGreen</font><font color="#434f54">,</font> <font color="#000000">128</font><font color="#434f54">-</font><font color="#000000">val</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO RECEBE O VALOR</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">10</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;INTERVALO DE 10 MILISSEGUNDOS</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - RGB LED SMD Module KY-009

[![Watch the video](https://img.youtube.com/vi/5tEUm2QDVbo/maxresdefault.jpg)](https://youtu.be/5tEUm2QDVbo)

## Key Switch Module KY-004
Key Switch Module KY-004

## Code - Key Switch Module KY-004

<pre>
<font color="#00979c">int</font> <font color="#000000">led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Define the LED pin</font>
<font color="#00979c">int</font> <font color="#000000">buttonpin</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Define the push button pin</font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Define a numeric variable</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buttonpin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">buttonpin</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; check the state of the button</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#434f54">&#47;&#47; if button is pressed, turn LED on</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Key Switch Module KY-004

[![Watch the video](https://img.youtube.com/vi/LC_ZEnWz6b0/maxresdefault.jpg)](https://youtu.be/LC_ZEnWz6b0)

## Tilt Switch Module KY-020
Tilt Switch Module KY-020

## Code - Tilt Switch Module KY-020

<pre>
<font color="#00979c">int</font> <font color="#000000">tiltPin</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; pin number for tilt switch signal</font>
<font color="#00979c">int</font> <font color="#000000">ledPin</font> <font color="#434f54">=</font> &nbsp;<font color="#000000">13</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; pin number of LED</font>
<font color="#00979c">int</font> <font color="#000000">tiltState</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; variable for reading the tilt switch status</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; set the LED pin as output</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">tiltPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; set the tilt switch pin as input</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; get the tilt switch state</font>
 &nbsp;<font color="#000000">tiltState</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">tiltPin</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#434f54">&#47;&#47; check if tilt switch is tilted.</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">tiltState</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Tilt Switch Module KY-020

[![Watch the video](https://img.youtube.com/vi/ONL_qCj43NE/maxresdefault.jpg)](https://youtu.be/ONL_qCj43NE)


## Heartbeat sensor KY-039
Heartbeat sensor KY-039

## Code - Heartbeat sensor KY-039

<pre>

<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">LiquidCrystal</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#5e6d03">#define</font> <font color="#000000">samp_siz</font> <font color="#000000">4</font>
<font color="#5e6d03">#define</font> <font color="#000000">rise_threshold</font> <font color="#000000">5</font>
<font color="#434f54">&#47;&#47; Pulse Monitor Test Script</font>
<font color="#00979c">int</font> <font color="#000000">sensorPin</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47;Define os pinos que serão utilizados para ligação ao display</font>
<b><font color="#d35400">LiquidCrystal</font></b> <font color="#000000">lcd</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">11</font><font color="#434f54">,</font> <font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">4</font><font color="#434f54">,</font> <font color="#000000">3</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>



<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47;Define o número de colunas e linhas do LCD</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">16</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>

 &nbsp;<font color="#434f54">&#47;&#47;Limpa a tela</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">clear</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#00979c">float</font> <font color="#000000">reads</font><font color="#000000">[</font><font color="#000000">samp_siz</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#000000">sum</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">long</font> <font color="#00979c">int</font> <font color="#000000">now</font><font color="#434f54">,</font> <font color="#000000">ptr</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">float</font> <font color="#000000">last</font><font color="#434f54">,</font> <font color="#000000">reader</font><font color="#434f54">,</font> <font color="#000000">start</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">float</font> <font color="#000000">first</font><font color="#434f54">,</font> <font color="#000000">second</font><font color="#434f54">,</font> <font color="#000000">third</font><font color="#434f54">,</font> <font color="#000000">before</font><font color="#434f54">,</font> <font color="#000000">print_value</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">bool</font> <font color="#000000">rising</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">rise_count</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">n</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">long</font> <font color="#00979c">int</font> <font color="#000000">last_beat</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">samp_siz</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">reads</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">sum</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">ptr</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; calculate an average of the sensor</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; during a 20 ms period (this will eliminate</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; the 50 Hz noise caused by electric light</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">n</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">start</font> <font color="#434f54">=</font> <font color="#d35400">millis</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">reader</font> <font color="#434f54">=</font> <font color="#000000">0.</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">do</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">reader</font> <font color="#434f54">+=</font> <font color="#d35400">analogRead</font> <font color="#000000">(</font><font color="#000000">sensorPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">n</font><font color="#434f54">++</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">now</font> <font color="#434f54">=</font> <font color="#d35400">millis</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#000000">now</font> <font color="#434f54">&lt;</font> <font color="#000000">start</font> <font color="#434f54">+</font> <font color="#000000">20</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">reader</font> <font color="#434f54">&#47;=</font> <font color="#000000">n</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; we got an average</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Add the newest measurement to an array</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; and subtract the oldest measurement from the array</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; to maintain a sum of last measurements</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">sum</font> <font color="#434f54">-=</font> <font color="#000000">reads</font><font color="#000000">[</font><font color="#000000">ptr</font><font color="#000000">]</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">sum</font> <font color="#434f54">+=</font> <font color="#000000">reader</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">reads</font><font color="#000000">[</font><font color="#000000">ptr</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">reader</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">last</font> <font color="#434f54">=</font> <font color="#000000">sum</font> <font color="#434f54">&#47;</font> <font color="#000000">samp_siz</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; now last holds the average of the values in the array</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; check for a rising curve (= a heart beat)</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">last</font> <font color="#434f54">&gt;</font> <font color="#000000">before</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">rise_count</font><font color="#434f54">++</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#434f54">!</font><font color="#000000">rising</font> <font color="#434f54">&amp;&amp;</font> <font color="#000000">rise_count</font> <font color="#434f54">&gt;</font> <font color="#000000">rise_threshold</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Ok, we have detected a rising curve, which implies a heartbeat.</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Record the time since last beat, keep track of the two previous</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; times (first, second, third) to get a weighed average.</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; The rising flag prevents us from detecting the same rise</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; more than once.</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">rising</font> <font color="#434f54">=</font> <font color="#00979c">true</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">first</font> <font color="#434f54">=</font> <font color="#d35400">millis</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#434f54">-</font> <font color="#000000">last_beat</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">last_beat</font> <font color="#434f54">=</font> <font color="#d35400">millis</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Calculate the weighed average of heartbeat rate</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; according to the three last beats</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">print_value</font> <font color="#434f54">=</font> <font color="#000000">60000.</font> <font color="#434f54">&#47;</font> <font color="#000000">(</font><font color="#000000">0.4</font> <font color="#434f54">*</font> <font color="#000000">first</font> <font color="#434f54">+</font> <font color="#000000">0.3</font> <font color="#434f54">*</font> <font color="#000000">second</font> <font color="#434f54">+</font> <font color="#000000">0.3</font> <font color="#434f54">*</font> <font color="#000000">third</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Posiciona o cursor na coluna 3, linha 0;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Envia o texto entre aspas para o LCD</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Heartbeat&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">print_value</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">third</font> <font color="#434f54">=</font> <font color="#000000">second</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">second</font> <font color="#434f54">=</font> <font color="#000000">first</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Ok, the curve is falling</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">rising</font> <font color="#434f54">=</font> <font color="#00979c">false</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">rise_count</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">before</font> <font color="#434f54">=</font> <font color="#000000">last</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">ptr</font><font color="#434f54">++</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">ptr</font> <font color="#434f54">%=</font> <font color="#000000">samp_siz</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Heartbeat sensor KY-039

[![Watch the video](https://img.youtube.com/vi/n4XcPgWmFyQ/maxresdefault.jpg)](https://youtu.be/n4XcPgWmFyQ)

## Vibration Switch Module KY-002
Vibration Switch Module KY-002

## Code - Vibration Switch Module KY-002

<pre>
<font color="#00979c">int</font> <font color="#000000">Led</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define the LED Pin</font>
<font color="#00979c">int</font> <font color="#000000">shock</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define the sensor Pin </font>
<font color="#00979c">int</font> <font color="#000000">val</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define; a numeric variable val </font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font> <font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; LED pin as output &nbsp;</font>
 &nbsp;<font color="#d35400">pinMode</font> <font color="#000000">(</font><font color="#000000">shock</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; input from KY-002 sensor</font>
<font color="#000000">}</font> 

<font color="#00979c">void</font> <font color="#5e6d03">loop</font> <font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#000000">val</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font> <font color="#000000">(</font><font color="#000000">shock</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; read the value from KY-002</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">val</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font> <font color="#000000">)</font> <font color="#000000">{</font><font color="#434f54">&#47;&#47; when sensor detects shock, LED flashes &nbsp;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font> <font color="#5e6d03">else</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font> <font color="#000000">(</font><font color="#000000">Led</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Vibration Switch Module KY-002

[![Watch the video](https://img.youtube.com/vi/Jr5IeYNQmTY/maxresdefault.jpg)](https://youtu.be/Jr5IeYNQmTY)

## 18B20 temp ky - 001(hw - 506)
18B20 temp ky - 001(hw - 506)

## Code - 18B20 temp ky - 001(hw - 506)

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">LiquidCrystal</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">OneWire</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">DallasTemperature</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Data wire is plugged into pin 2 on the Arduino</font>
<font color="#5e6d03">#define</font> <font color="#000000">ONE_WIRE_BUS</font> <font color="#000000">6</font>

<font color="#434f54">&#47;&#47; Setup a oneWire instance to communicate with any OneWire devices (not just Maxim&#47;Dallas temperature ICs)</font>
<b><font color="#d35400">OneWire</font></b> <font color="#000000">oneWire</font><font color="#000000">(</font><font color="#000000">ONE_WIRE_BUS</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#434f54">&#47;&#47; Pass our oneWire reference to Dallas Temperature. </font>
<b><font color="#d35400">DallasTemperature</font></b> <font color="#000000">sensors</font><font color="#000000">(</font><font color="#434f54">&amp;</font><font color="#000000">oneWire</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47;Define os pinos que serão utilizados para ligação ao display</font>
<b><font color="#d35400">LiquidCrystal</font></b> <font color="#000000">lcd</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">11</font><font color="#434f54">,</font> <font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">4</font><font color="#434f54">,</font> <font color="#000000">3</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Inicializa a serial</font>
 &nbsp;<font color="#434f54">&#47;&#47;Define o número de colunas e linhas do LCD</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">16</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;
 &nbsp;<font color="#434f54">&#47;&#47; Start up the library</font>
 &nbsp;<font color="#000000">sensors</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; IC Default 9 bit. If you have troubles consider upping it 12. Ups the delay giving the IC more time to process the temperature measurement</font>

<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47;Limpa a tela</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">clear</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47;Posiciona o cursor na coluna 3, linha 0;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47;Envia o texto entre aspas para o LCD</font>
 &nbsp;<font color="#000000">sensors</font><font color="#434f54">.</font><font color="#d35400">requestTemperatures</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Send the command to get temperatures</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Temperature is: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">sensors</font><font color="#434f54">.</font><font color="#d35400">getTempCByIndex</font><font color="#000000">(</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">5000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - 18B20 temp ky - 001(hw - 506)

[![Watch the video](https://img.youtube.com/vi/Ibjyvysk8Aw/maxresdefault.jpg)](https://youtu.be/Ibjyvysk8Aw)


## Photoresistor Module KY-018
Photoresistor Module KY-018

## Code - Photoresistor Module KY-018

<pre>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">pinoLed</font> <font color="#434f54">=</font> <font color="#000000">10</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO DIGITAL UTILIZADO PELO LED</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">pinoLDR</font> <font color="#434f54">=</font> <font color="#000000">A5</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;PINO ANALÓGICO UTILIZADO PELO LDR</font>
 &nbsp;
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font> &nbsp;
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO SAÍDA</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinoLDR</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;DEFINE O PINO COMO ENTRADA</font>
<font color="#000000">}</font> &nbsp;&nbsp;&nbsp;
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47;O VALOR 600 PODE SER AJUSTADO</font>
 &nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#d35400">analogRead</font><font color="#000000">(</font><font color="#000000">pinoLDR</font><font color="#000000">)</font> <font color="#434f54">&gt;</font> <font color="#000000">600</font><font color="#000000">)</font><font color="#000000">{</font> <font color="#434f54">&#47;&#47;SE O VALOR LIDO FOR MAIOR QUE 600, FAZ</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;ACENDE O LED</font>
 &nbsp;<font color="#000000">}</font> &nbsp;
 &nbsp;<font color="#5e6d03">else</font><font color="#000000">{</font> <font color="#434f54">&#47;&#47;SENÃO, FAZ</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinoLed</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;APAGA O LED</font>
 &nbsp;<font color="#000000">}</font> &nbsp;
<font color="#000000">}</font>

</pre>

## Video - Photoresistor Module KY-018

[![Watch the video](https://img.youtube.com/vi/J8cb6l8GBLo/maxresdefault.jpg)](https://youtu.be/J8cb6l8GBLo)

## Temp and humidity ky - 015
Temp and humidity ky - 015

## Code - Temp and humidity ky - 015

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">LiquidCrystal</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font> <font color="#434f54">&#47;&#47;Carrega a biblioteca LCD</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">DHT</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font> <font color="#434f54">&#47;&#47;Carrega a biblioteca DHT</font>

<font color="#434f54">&#47;&#47;Define a ligação ao pino de dados do sensor</font>
<font color="#5e6d03">#define</font> <font color="#000000">DHTPIN</font> <font color="#000000">A5</font>

<font color="#434f54">&#47;&#47;Define o tipo de sensor DHT utilizado</font>
<font color="#5e6d03">#define</font> <font color="#000000">DHTTYPE</font> <font color="#000000">DHT11</font>

<b><font color="#d35400">DHT</font></b> <font color="#000000">dht</font><font color="#000000">(</font><font color="#000000">DHTPIN</font><font color="#434f54">,</font> <font color="#000000">DHTTYPE</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47;Define os pinos que serão ligados ao LCD</font>
<b><font color="#d35400">LiquidCrystal</font></b> <font color="#000000">lcd</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">11</font><font color="#434f54">,</font> <font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">4</font><font color="#434f54">,</font> <font color="#000000">3</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47;Array simbolo grau</font>
<font color="#00979c">byte</font> <font color="#000000">grau</font><font color="#000000">[</font><font color="#000000">8</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">{</font> <font color="#000000">B00001100</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00010010</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00010010</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00001100</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00000000</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00000000</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00000000</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">B00000000</font><font color="#434f54">,</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Inicializa a serial</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">16</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Inicializa LCD</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">clear</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Limpa o LCD</font>
 &nbsp;<font color="#434f54">&#47;&#47;Cria o caractere customizado com o simbolo do grau</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">createChar</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">grau</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">dht</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">float</font> <font color="#000000">h</font> <font color="#434f54">=</font> <font color="#000000">dht</font><font color="#434f54">.</font><font color="#d35400">readHumidity</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Le o valor da umidade</font>
 &nbsp;<font color="#00979c">float</font> <font color="#000000">t</font> <font color="#434f54">=</font> <font color="#000000">dht</font><font color="#434f54">.</font><font color="#d35400">readTemperature</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;Le o valor da temperatura</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Temp : &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34; &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">7</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">t</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#434f54">&#47;&#47;Mostra o simbolo do grau formado pelo array</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">(</font><font color="#00979c">byte</font><font color="#000000">)</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#434f54">&#47;&#47;Mostra o simbolo do grau quadrado</font>
 &nbsp;<font color="#434f54">&#47;&#47;lcd.print((char)223);</font>

 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">0</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Umid : &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34; &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">7</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">h</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;%&#34;</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#434f54">&#47;&#47;Intervalo recomendado para leitura do sensor</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">2000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Temp and humidity ky - 015

[![Watch the video](https://img.youtube.com/vi/QxNOflGUBB8/maxresdefault.jpg)](https://youtu.be/QxNOflGUBB8)

## IR receiver KY - 022
IR receiver KY - 022

## Code - IR receiver KY - 022

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">IRremote</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#00979c">int</font> <font color="#000000">RECV_PIN</font> <font color="#434f54">=</font> <font color="#000000">11</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; define input pin on Arduino</font>
<b><font color="#d35400">IRrecv</font></b> <font color="#000000">irrecv</font><font color="#000000">(</font><font color="#000000">RECV_PIN</font><font color="#000000">)</font><font color="#000000">;</font>
<b><font color="#d35400">decode_results</font></b> <font color="#000000">results</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; decode_results class is defined in IRremote.h</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">irrecv</font><font color="#434f54">.</font><font color="#d35400">enableIRIn</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Start the receiver</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">irrecv</font><font color="#434f54">.</font><font color="#d35400">decode</font><font color="#000000">(</font><font color="#434f54">&amp;</font><font color="#000000">results</font><font color="#000000">)</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">results</font><font color="#434f54">.</font><font color="#000000">value</font><font color="#434f54">,</font> <font color="#00979c">HEX</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">irrecv</font><font color="#434f54">.</font><font color="#d35400">resume</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Receive the next value</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#d35400">delay</font> <font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; small delay to prevent reading errors</font>
<font color="#000000">}</font>

</pre>

## Video - IR receiver KY - 022

[![Watch the video](https://img.youtube.com/vi/_eNGLsfv03U/maxresdefault.jpg)](https://youtu.be/_eNGLsfv03U)
