import animate
var strip = Leds(1, gpio.pin(gpio.WS2812, 0))
var anim = animate.core(strip, 100)
var pulse = animate.pulse(0x000000, 1, 1)
var palette = animate.palette(animate.PALETTE_STANDARD_TAG, 10000)
palette.set_cb(pulse, pulse.set_color)
anim.start()