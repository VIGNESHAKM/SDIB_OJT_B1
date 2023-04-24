#!/bin/sh
while :
do
read CH
{
case "$CH" in
"1")

echo 77 > /sys/class/gpio/export
echo out > /sys/class/gpio/PC13/direction
echo 0 > /sys/class/gpio/PC13/value
echo     "**** LED1 ON ****"
;;


"2")
echo 81 > /sys/class/gpio/export
echo out > /sys/class/gpio/PC17/direction
echo 0 > /sys/class/gpio/PC17/value
echo     "**** LED2 ON ****"
;;
"3")
echo 83 > /sys/class/gpio/export         
echo out > /sys/class/gpio/PC19/direction
echo 0 > /sys/class/gpio/PC19/value      
echo     "**** LED3 ON ****"             
;;                                       
                                         
"4")                                     
echo 77 > /sys/class/gpio/export         
echo out > /sys/class/gpio/PC13/direction
echo 1 > /sys/class/gpio/PC13/value      
echo     "**** LED1 OFF ****"            
;;                                       
                                         
"5")                                     
echo 81 > /sys/class/gpio/export         
echo out > /sys/class/gpio/PC17/direction
echo 1 > /sys/class/gpio/PC17/value      
echo     "**** LED2 OFF ****"            
;;                                       
                                         
"6")                                     
echo 83 > /sys/class/gpio/export         
echo out > /sys/class/gpio/PC19/direction
echo 1 > /sys/class/gpio/PC19/value      
echo     "**** LED3 OFF ****"            
;;                                  
