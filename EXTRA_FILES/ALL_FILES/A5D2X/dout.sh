#!/bin/sh
echo
echo -n "-----------check digital output-------------"
echo
echo -n "============================================="
        echo "check if r63 registor is mounted, and then connect 6pin connected
        echo
        echo "----------check pin2-gpio1_io15----------------"
        echo
        echo 97 > /sys/class/gpio/export
        echo
        if [ -d "/sys/class/gpio/gpio97" ]
        then
                echo "gpio 15 exported"
        else
                echo "fail to export gpio97"
        fi
        echo out > /sys/class/gpio/PD1/direction
        echo 1 > /sys/class/gpio/PD1/value
        sleep 2
        echo 0 > /sys/class/gpio/PD1/value
        sleep 2
        echo 0 > /sys/class/gpio/PD1/value                    
        sleep 2                           
                                          
        gpio97 value=$(cat /sys/class/gpio/PD1/value)
                if [ "$gpio97_value" == 1 ] 
                then                            
                        echo "gpio97 dout connected"
                        echo                    
                        echo "==========pass============"
                        echo                    
                else                            
                        echo "gpio97 dout not connected"
                        echo                         
                        echo "============fail==========="
                        echo                         
fi         

