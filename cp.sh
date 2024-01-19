rm Tasmota/platformio_tasmota_user_env.ini 
ln config/platformio_tasmota_user_env.ini Tasmota/platformio_tasmota_user_env.ini

rm Tasmota/platformio_override.ini 
ln config/platformio_override.ini Tasmota/platformio_override.ini

rm Tasmota/tasmota/user_config_override.h
ln config/user_config_override.h Tasmota/tasmota/user_config_override.h

