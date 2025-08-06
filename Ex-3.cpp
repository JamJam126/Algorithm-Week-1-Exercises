/**
 * Create a basic password checker program to check if a password 
 * entered by the user is strong. A strong password must:
 * - Be at least 8 characters long
 * - Contain at least one uppercase letter
 * - Contain at least one lowercase letter
 * - Contain at least one number
 *
 * Tips:
 * - Use a for loop to check each character in the password
 * - Use conditions like: 
 *   - ch >= 'A' && ch <= 'Z' for uppercase
 *   - ch >= 'a' && ch <= 'z' for lowercase
 *   - ch >= '0' && ch <= '9' for digits
 * - Use boolean flags (true/false) to track if each rule is met
 *
 * Expected Output (example):
 * Enter password: Secret123
 * Strong password!
 *
 * Expected Output (example):
 * Enter password: short
 * Weak password. Try again.
 */