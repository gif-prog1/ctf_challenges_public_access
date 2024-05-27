FROM ubuntu:16.04
RUN apt-get update && apt-get install -y openssh-server 
RUN useradd -m fin  
RUN echo "fin:abc123" | chpasswd
RUN touch /flag.txt && \
    echo "kctf{p@55_h4ck3r}" > /flag.txt && \
    chown root /flag.txt && \
    chmod 400 /flag.txt && \
    chmod 655 /etc/shadow  
RUN mkdir /var/run/sshd
RUN echo 'root:qwerty' | chpasswd
RUN sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin no/' /etc/ssh/sshd_config
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd
EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]
