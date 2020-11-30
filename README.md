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
