# Cybersecurity + C Learning Roadmap

---

# Phase 1 — C Fundamentals + OS & Networking Basics

**Level:** Beginner

## 1. Caesar Cipher CLI Tool

**Tag:** C + Cryptography

Build a command-line program that encrypts and decrypts text using the Caesar cipher. Teaches CLI argument parsing, ASCII math, and basic file I/O.

### What You'll Learn

* Variables, loops, and functions in C
* `stdin` / `stdout` and `argc` / `argv`
* Basic cryptography concepts
* How substitution ciphers work

### Skills

`pointers` • `argv` • `stdio.h` • `ASCII`

---

## 2. Port Scanner

**Tag:** C + Networking

Write a simple TCP port scanner that attempts to connect to a range of ports on a target host and reports which are open.

### What You'll Learn

* BSD sockets API (`socket`, `connect`, `close`)
* TCP/IP fundamentals
* What open/closed/filtered ports mean
* Basic network reconnaissance concepts

### Skills

`sys/socket.h` • `connect()` • `TCP/IP` • `errno`

---

## 3. File Integrity Checker

**Tag:** C + Security

Implement MD5 or SHA-256 from scratch (or using OpenSSL) to hash files and detect tampering. Save a baseline and re-check on demand.

### What You'll Learn

* Hashing and hash functions
* Why integrity matters
* File I/O in C
* Using a C library like OpenSSL

### Skills

`fread()` • `OpenSSL` • `SHA-256` • `hex output`

---

## 4. Syslog Parser

**Tag:** C + Monitoring

Read `/var/log/syslog` (or another log file), parse lines with `sscanf` or regex, and flag suspicious patterns like failed SSH logins.

### What You'll Learn

* String parsing in C
* Log analysis fundamentals
* Pattern matching basics
* SIEM concepts

### Skills

`sscanf` • `regex.h` • `fgets` • `logging`

---

# Phase 2 — Memory, Processes & Defensive Programming

**Level:** Intermediate

## 1. Buffer Overflow Demo Lab

**Tag:** C + Exploitation

Write a deliberately vulnerable C program, then write an exploit for it. Finally, patch it to understand secure coding practices.

### What You'll Learn

* Stack layout and stack frames
* How buffer overflows work
* ASLR, stack canaries, NX bit
* Secure coding in C

### Skills

`gdb` • `stack frames` • `gets() vs fgets()` • `ASLR`

---

## 2. Password Manager (Local)

**Tag:** C + Cryptography

Store passwords encrypted on disk using AES-256 through OpenSSL. Implement a master password using PBKDF2 key derivation.

### What You'll Learn

* Symmetric encryption (AES)
* Key derivation functions
* Secure memory handling
* Why plaintext storage is dangerous

### Skills

`AES-256` • `PBKDF2` • `OpenSSL EVP` • `memset_s`

---

## 3. Packet Sniffer

**Tag:** C + Networking

Use `libpcap` to capture and dissect network packets — parse Ethernet, IP, TCP, and UDP headers and print summaries similar to `tcpdump`.

### What You'll Learn

* Raw packet structure
* How Wireshark/tcpdump work internally
* OSI model concepts
* Promiscuous mode networking

### Skills

`libpcap` • `struct unpacking` • `ntohl/ntohs` • `raw sockets`

---

## 4. Intrusion Detection System (IDS) Prototype

**Tag:** C + Detection

Build on the packet sniffer to detect suspicious traffic patterns like port scans or large ICMP payloads.

### What You'll Learn

* Signature-based detection
* IDS/IPS concepts
* Rate limiting and thresholds
* Event correlation basics

### Skills

`pcap_loop()` • `hash maps in C` • `time.h` • `alert logging`

---

# Phase 3 — Web, Auth & Penetration Testing Concepts

**Level:** Intermediate

## 1. HTTP Server With Authentication

**Tag:** C + Web Security

Write a minimal HTTP/1.1 server from scratch. Add authentication using bcrypt-hashed passwords.

### What You'll Learn

* HTTP request/response parsing
* Authentication mechanisms
* Password hashing with bcrypt
* Why HTTP headers matter for security

### Skills

`recv()/send()` • `HTTP parsing` • `bcrypt` • `pthreads`

---

## 2. SQL Injection Demo & Mitigations

**Tag:** C + Web Security

Write a vulnerable SQLite-backed application, exploit the vulnerability, then fix it using prepared statements.

### What You'll Learn

* How SQL injection works
* Parameterized queries
* Input validation
* OWASP Top 10 concepts

### Skills

`sqlite3.h` • `prepared statements` • `input sanitization` • `OWASP`

---

## 3. TLS/SSL Handshake Tracer

**Tag:** C + Cryptography

Use OpenSSL to establish a TLS connection and print each step of the handshake process.

### What You'll Learn

* TLS 1.3 fundamentals
* PKI (Public Key Infrastructure)
* Certificate validation
* Why HTTPS matters

### Skills

`SSL_connect()` • `X.509 certificates` • `cipher suites` • `MITM concepts`

---

## 4. Vulnerability Scanner (CVE Lookup)

**Tag:** C + Recon

Write a tool that banner-grabs services like SSH or HTTP, extracts versions, and queries CVE databases.

### What You'll Learn

* Banner grabbing
* CVE/NVD databases
* Recon methodology
* HTTP client requests in C

### Skills

`recv()` banners • `JSON parsing` • `NVD API` • `version matching`

---

# Phase 4 — Advanced Exploitation, Forensics & Defense

**Level:** Advanced

## 1. Rootkit Detector

**Tag:** C + Forensics

Compare `/proc` listings with direct syscall output to detect hidden processes.

### What You'll Learn

* Linux `/proc` filesystem
* How rootkits hide
* Syscall-level programming
* Forensic methodology

### Skills

`/proc/` • `ptrace` • `readdir()` • `syscalls`

---

## 2. Shellcode Loader (CTF Lab)

**Tag:** C + Exploitation

In a safe VM environment, write a program that allocates executable memory and runs shellcode from a file.

### What You'll Learn

* `mmap` and memory permissions
* Shellcode and payloads
* W^X / DEP protections
* Exploit mitigations

### Skills

`mmap(PROT_EXEC)` • `mprotect` • `shellcode` • `W^X`

---

## 3. Network Honeypot

**Tag:** C + Defense

Bind to common ports and imitate real services long enough to collect attacker behavior data.

### What You'll Learn

* Deception-based defense
* Attacker behavior analysis
* Threat intelligence collection
* Event logging and alerting

### Skills

`epoll/select` • `fake protocol responses` • `GeoIP lookup` • `SIEM export`

---

## 4. Binary Analysis Tool

**Tag:** C + Reverse Engineering

Parse ELF binaries to inspect headers, sections, symbols, and compiler protections.

### What You'll Learn

* ELF binary format
* Reverse engineering basics
* Compiler security features
* How tools like `checksec` work internally

### Skills

`elf.h` • `mmap file` • `ELF headers` • `PIE/RELRO/canary`

