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