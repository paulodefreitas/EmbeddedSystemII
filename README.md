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
Reed Switch KY - 025

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
Reed Switch KY - 025

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