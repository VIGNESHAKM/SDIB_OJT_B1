#!/bin/sh

while :
do
read CH
{
case "$CH" in
"1")
echo 77 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio77/direction
echo 0 > /sys/class/gpio/gpio77/value
echo "*** LED1 ON ****"

;;

"2")
echo 81 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio81/direction
echo 0 > /sys/class/gpio/gpio81/value
echo "*** LED2 ON ****"
;;

"3")
echo 83 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio83/direction
echo 0 > /sys/class/gpio/gpio83/value
echo "*** LED3 ON ****"
;;


"4")
echo "------------- PWM Test---------------"
echo "**********************************"
echo
if [ -d "/sys/class/pwm/pwmchip0/" ]
then
    echo "PWMchip0 Exist"
    echo
    echo 0 > /sys/class/pwm/pwmchip0/export
    echo "PWM Test"
    echo
    sleep 3
    echo "Setting PWM Time Period"
    echo 50000 > /sys/class/pwm/pwmchip0/pwm0/period
    echo
    echo "Setting duty cycle"
    echo 25000 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
    echo
    sleep 3
    echo 12000 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
    echo "Enabling PWM"
    echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable
    cat /sys/kernel/debug/pwm
    echo
    echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 3
    echo
    status=$(cat /sys/class/pwm/pwmchip0/pwm0/enable)
    if [ "$status" == "1" ]
    then
        echo
        echo "============= PASS ==============="
        echo
    else
        echo
        echo "============= FAIL ==============="
        echo
    fi
else
    echo "fail"
fi
;;


"5")
echo "************************************"
echo
echo "---------BUTTON/SWITCH TEST--------"
echo
echo "***********************************"
echo

# Export GPIO pin 40
echo 40 > /sys/class/gpio/export

echo "Status of Button: "

# Read the value of the GPIO pin
status=$(cat /sys/class/gpio/gpio40/value)

if [ "$status" -eq 0 ]; then
    echo "Button released"
    echo
    echo "******** PASS *********"
    echo
else
 echo "Button pressed"
    echo
    echo "******** FAIL *********"
    echo
fi
;;


"6")
echo "************************************************"
echo
echo "------------------ DIN TEST --------------------"
echo
echo "************************************************"
echo
echo
echo 133 > /sys/class/gpio/export
if [ -d "/sys/class/gpio/gpio133" ]
then
    echo "GPIO Exported"
else
    echo "GPIO Export Failed"
fi
echo in > /sys/class/gpio/gpio133/direction
sleep 2
gpio5_value=$(cat /sys/class/gpio/gpio133/value)
if [ "$gpio5_value" == 1 ]
then
    echo
    echo "============= PASS ==============="
echo
else
    echo
    echo "============= FAIL ================"
    fi
;;


"7")
echo  "***************************************************"
echo
echo "------------------- DOUT TEST ----------------------"
echo
echo  "***************************************************"
echo "check if R63 resiter mounted or not "
echo
echo "------------ GPIOPIN-5 --------------"
echo
echo 15 > /sys/class/gpio/export
echo
if [ -d "/sys/class/gpio/gpio15" ]
then
    echo "GPIO Exported"
else
    echo "GPIO Exported Failed"
fi
echo out > /sys/class/gpio/gpio15/direction
echo 1 > /sys/class/gpio/gpio15/value
sleep 2
echo 0 > /sys/class/gpio/gpio15/value
sleep 2
gpio_value=$(cat /sys/class/gpio/gpio15/value)
if [ "$gpio_value" == 1 ]
then
    echo " DOUT CONNECTED "
    echo
    echo "============= PASS ==============="
    echo
else
    echo "DOUT NOT CONNECTED "
    echo
    echo "============= FAIL==============="
    echo
fi
;;



"8")
echo "****************************************"
echo
echo "------------ I2C TEST ------------------"
echo
echo "**************"
echo

i2cdetect -y -r 0
echo "======= PERFORMING ADC TEST ===="
#./eeprom
echo
#var=$(./eeprom)
if [ "$var" == "$var" ]
then
echo
echo echo "========= PASS ================"
echo
else
echo
echo "***** FAIL *****"
echo
fi
;;


"9")
echo "********************************" 
echo
echo "----------- RTC TEST -----------"
echo
echo "********************************"
echo

if [ -e "/dev/rtc0" ]
then
    echo "RTC device found: /dev/rtc0"
else
    echo "No RTC device found"
fi
echo
echo "Restarting chronyd service..."
systemctl restart chronyd
echo
echo "Setting timezone to Asia/Calcutta..."
ln -sf /usr/share/zoneinfo/Asia/Kolkata /etc/localtime
echo
echo "Current date and time:"
date
echo
var=$(date)
if [ "$var" == "$var" ]
then
    echo "********* PASS **************"
else
    echo "********* FAIL **************"
fi
;;


"10")
echo " ------------------------ TEST USB ------------------------------------ "
echo
echo " ***************** "
echo
echo " Insert any pen drive to board for USB Test "
echo
echo " Waiting for 5 sec "
sleep 5
echo " Creating test file "
touch file.txt
echo " Welcome on phytec " > file.txt
if [ -e "/dev/sda" ] || [ -e "/dev/sdb" ] || [ -e "/dev/sdc" ]
then
    echo
    echo " USB device plugged in to board "
    echo " ------- Mounting the USB device -------- "

    echo
    mount /dev/sda /mnt
    cd /mnt ||
    echo " Copying file from board to USB device "
    echo
    cp /home/Testing/file.txt /mnt
    cd / ||

    if [ -e "/mnt/file.txt" ]
    then
        echo " Copying file from board to USB device successful "
        echo
        echo "============= PASS ==============="
        echo
    else
        echo " Files not copied "
        echo "============= FAIL ==============="
    fi
else
    echo " USB device not found "
    echo "============= FAIL ==============="
fi
;;


"11")
echo  "*********************************"
echo
echo "-------- TEST USART  ------------"
echo
echo  "********************************"
if [ -e "/dev/ttymxc2" ]
then
echo "ADC NODE EXIST"
echo
echo "------------ performing UART Test ------- "
echo
./UART
echo "--------------------- PASS ----------------"
echo
else
echo "USART Node NOT Found "
echo "--------------------- FAIL ----------------"
fi
;;


"12")
echo "***************************************************"
echo
echo "=============== TEST SD CARD ======================"
echo
echo "***************************************************"
touch test.txt
echo " Welcome on phytec " > data.txt

if [ -e "/dev/mmcblk0" ]
then
  echo "SD card found on the board"
  echo "---------mounting the sd card--------"
  mount /dev/mmcblk0p1 /mnt/
  cd /mnt/ ||
  echo "copying file from board to sd card"
  cp /home/Testing/test.txt /mnt/
  if [ -e "/mnt/test.txt" ]
 then
    echo "copying of file from board to sd card successful"
    echo "*************PASS**********"
else
echo "====fail======"
fi
echo "unmounting /mnt"
umount /mnt
else
echo "no sdcard found"
fi
;;



"13")
echo
echo "----------- RTC TEST -----------"
echo

if [ -e "/dev/rtc0" ]
then
    echo "RTC device found: /dev/rtc0"
else
    echo "No RTC device found"
fi

echo
echo "Restarting chronyd service..."
#systemctl restart chronyd
echo
echo "Setting timezone to Asia/Calcutta..."
ln -s /usr/share/zoneinfo/Asia/Kolkata /etc/localtime

echo
echo "Current date and time:"
date
echo                                                  
var=$(date)
if [ "$var" == "$var" ]
then
    echo "*** PASS ******"   
else
    echo "*** FAIL ******"
fi
;;


"14")
echo "***************************************************"
echo
echo "----------------- RS485 TEST ---------------------"
echo
echo "***************************************************"
echo
echo "-----checking for RS485----"
echo

if [ -e "/dev/ttymxc5" ]
then
    echo " RS485 Node exists"
    echo
    echo " ------ Performing 485-----"
    echo
    echo "************* PASS **************"
    echo " press Ctrl+C to exit to microcom "
    microcom -s 115200 /dev/ttymxc5


    echo "------ pass ------"
else

    echo "RS485 Node not found"
echo "===========fail============="
fi
;;

"15")
echo "******************************************"
echo
echo "---------- TEST Ethernet -----------------"
echo
echo "*******************************************"

if [ -e "/sys/class/net/eth0" ]
 then
    echo
    echo "eth0 node exist"
    echo
    echo "cat /sys/class/net/eth0/carrier"
        echo "======press ctrl+c to  stop pinging======="
    cat /sys/class/net/eth0/carrier

    ping google.com
echo
echo " ==================pass============="
echo
else
    echo "no eth0 node found"
echo
echo
    echo "============= FAIL =============="
fi
;;

esac
}
done
