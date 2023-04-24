#!/bin/sh
echo -n "***********************************************"
echo
echo -n "------------------TEST I2C----------------"
echo
echo -n "**********************************************"

echo
echo "cheking for pin11-12 of microbus connector"
echo
i2cdetect -y -r 0
echo
echo "Reading the value of i2c"
#./eeprom
        echo
        var=$(cat /sys/class/i2c-adapter/i2c-0/0-0050/eeprom)
        if [ "$var" == 1 ]
        then
                echo
                echo "===========PASS ============"
        else
                echo
                echo "==========fail====="


        echo                                               
        status=$(cat /sys/class/pwm/pwmchip0/pwm0/enable)
                if [ "$status" == 1 ]               
                then                                    
                        echo                            
                        echo "------------------pass------------"
                        echo                               
                else                                       
                        echo                               
                        echo "---------------fail----------"
                        echo                                     
        fi                                                       
        else                                                     
                echo "no pwm chip found"                         
                echo "=================fail=============="  
        fi                 
