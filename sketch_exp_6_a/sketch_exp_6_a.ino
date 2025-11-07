//6.a.Hardware - Blink Onboard LED

import machine
import utime
trigger = machine.Pin(2, machine.Pin.OUT)
echo = machine.Pin(3, machine.Pin.IN)
def get_distance():
	trigger.value(1)
	utime.sleep_us(10)
	trigger.value(0)
	while echo.value() == 0:
		signaloff = utime.ticks_us()
	while echo.value() == 1:
		signalon = utime.ticks_us()
	timepassed = signalon - signaloff
	distance = (timepassed * 0.0343) / 2
	return distance
while True:
	print("Distance:", get_distance(), "cm")
	utime.sleep(1)