
echo "*********************************************************************************"

echo "                              WELCOME TO AESLAB                                  "
echo "*********************************************************************************"

mkdir /var/lib/tftpboot
chmod 777 /var/lib/tftpboot
chown nobody -R /var/lib/tftpboot

FILE="/etc/xinetd.d/tftp"

/bin/cat <<EOM >$FILE

 service tftp
  {
 	 protocol = udp
 	 port = 69
 	 socket_type = dgram
	 wait = yes
 	 user = nobody
 	 server = /usr/sbin/in.tftpd
 	 server_args = /var/lib/tftpboot -s
 	 disable = no
 	}

EOM

service xinetd restart

mkdir /nfsroot


echo "/nfsroot *(rw,sync,no_subtree_check,no_root_squash) " >> /etc/exports

exportfs -ra
service xinetd restart
/etc/init.d/nfs-kernel-server restart

echo "******************************************************************************************"
echo "TFTP & NFS  SETUP has been done"
echo "*******************************************************************************************"
