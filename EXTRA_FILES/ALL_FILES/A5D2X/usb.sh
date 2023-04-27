#!/bin/sh
echo -n "********************************************"
echo
echo -n "============== USB TEST ==============="
echo
echo -n "********************************************"
        echo
        echo "Insert any pendrive to board for USB test"
        echo
        echo
        echo "waiting for 5 sec ..."
        sleep 5
        echo "creating a text file"
        touch file.txt
        echo "welcome to phytec" > file.txt

        if [ -e "/dev/sda" ] || [ -e "/dev/sdb" ] || [ -e "/dev/sdc" ]
        then
                echo
                echo "USB device plugged in to board"
                echo "===== mounting the usb device ====="
                echo
                echo                                      
                mount /dev/sda /mnt                       
                cd /mnt ||                                
                echo "copying file from board to usb device"
                echo                                        
                cp /data/script/file.txt /mnt               
                cd  ||                                      
                if [ -e "/mnt/file.txt" ]                             
                then                                                  
                        echo "copying of file from baord to usb device successfu
                        echo                                                    
                        echo "================ PASS============="               
                        echo                                                    
                else                                             
                        echo "file not copied to usb device"     
fi                                                          
                echo "unmouting usb"                        
                umount /mnt                                 
fi      
