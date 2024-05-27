FROM gcc:latest

WORKDIR /app

COPY flag.c /app

RUN apt-get update && apt-get install -y socat

RUN gcc -o flag flag.c -fno-stack-protector -z execstack -no-pie 

CMD socat -T60 TCP-LISTEN:12345,reuseaddr,fork EXEC:"timeout 60 ./flag"
