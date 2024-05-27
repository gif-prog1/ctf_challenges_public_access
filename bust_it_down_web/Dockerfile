# Use the official NGINX base image
FROM nginx:alpine

# Copy the static HTML site into the container
COPY ./static /usr/share/nginx/html

# Hide the flag in robots.txt
RUN echo "User-agent: *" > /usr/share/nginx/html/robots.txt
RUN echo "Disallow: /flag.txt" >> /usr/share/nginx/html/robots.txt

#COPY flag.txt /usr/share/nginx/html/flag.txt

# Expose port 80
EXPOSE 80

# Start NGINX
CMD ["nginx", "-g", "daemon off;"]
