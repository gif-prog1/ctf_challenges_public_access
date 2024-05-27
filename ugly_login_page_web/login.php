<?php

// Path to the SQLite database file
$db_file = '/var/database.db';

// Get input from the form
$username = $_POST['username'];
$password = $_POST['password'];

// Open the SQLite database connection
$db = new SQLite3($db_file);

// Vulnerable SQL query (subject to SQL injection)
$sql = "SELECT * FROM users WHERE username = '$username' AND password = '$password'";
$result = $db->query($sql);

if ($result->fetchArray()) {
    // Correct credentials
    echo "Congratulations! Flag: kctf{3lit3_end3rm@n}";
} else {
    // Incorrect credentials
    echo "Incorrect username or password.";
}

// Close the database connection
$db->close();

?>