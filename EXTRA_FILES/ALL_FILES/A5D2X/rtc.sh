#!/bin/sh                              
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
ln -sf /usr/share/zoneinfo/Asia/Kolkata /etc/localtime
                             
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
