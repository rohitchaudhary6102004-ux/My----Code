name = "ESP Firmware Studio"
com_port = "COM4"
baud_rate = 115200
chip = "ESP32"
flash_size = "4 MB"
status = "Connected"

print("Name of the Software : " + name)
print("Port : " + com_port)
print("Baud : " + str(baud_rate)) # print("Baud : ", baud_rate)
print("Chip : " + chip)
print("Flash Size : " + flash_size)
print("Status : " + status)