import nmap

scanner = nmap.PortScanner()

target = "192.168.1.0/24"

print("Scanning network...")

scanner.scan(hosts=target, arguments='-sn')

for host in scanner.all_hosts():
    print(f"Host: {host}")