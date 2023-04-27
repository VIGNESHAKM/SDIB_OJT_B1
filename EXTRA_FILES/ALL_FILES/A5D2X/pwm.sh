#!/bin/sh
echo
echo "-----------checking for pwmchip0----------"
echo

if [ -d "/sys/class/pwm/pwmchip0/" ]
then
        echo "pwmchip0 exist"
        echo
        echo "exporting pwm0"
        echo
        echo 0 > /sys/class/pwm/pwmchip0/export
        echo " PWM TEST "
        echo
        sleep 3
        echo "setting pwm time period"
        echo 50000 > /sys/class/pwm/pwmchip0/pwm0/period
        echo
        echo "setting duty cycle"
        echo 2500 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
        echo
        sleep 3
        echo 1200 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
        echo "enabling pwm"                                
        echo                                               
        echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable       
#       cat /sys/kernal/debug/pwm                        
        echo                                             
        echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable     
        sleep 3                                          
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
                        echo                                     
        fi                                                       
        else                                                     
                echo "no pwm chip found"                         
                echo "=================fail=============="  
        fi  
