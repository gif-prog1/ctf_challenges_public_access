# Use an official gcc runtime as a parent image
FROM gcc:latest

# Set the working directory in the container to /app
WORKDIR /app

# Copy the local file.c into the container at /app
COPY file.c /app
COPY flag.txt /app
# Install socat
RUN apt-get update && apt-get install -y socat

# Compile the C file
RUN gcc -o flag file.c

# Run the command when the container launches
CMD socat -T60 TCP-LISTEN:12345,reuseaddr,fork EXEC:"timeout 60 ./flag"
