# Use the official PHP image
FROM php:7.4-apache

# Install MySQLi extension
RUN docker-php-ext-install mysqli && docker-php-ext-enable mysqli

# Copy PHP files into the container
COPY index.php /var/www/html/index.php
COPY login.php /var/www/html/login.php
COPY database.db /var/.
# Expose port 80
EXPOSE 80
