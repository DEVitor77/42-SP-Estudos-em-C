ifconfig | grep "ether " | sed 's/^.*ether //' | cut -c1-17
