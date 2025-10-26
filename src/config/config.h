#pragma once

#include <string>
#include <cstdlib>

namespace Config {
        // Get environment variable ot fallback to default
        inline std::string getEnvVar(const char* name, const std::string& defaultValue) {
            const char* value = std::getenv(name);
            return (value ? std::string(value) : defaultValue);
        }

        // Database connection parameters
        inline const std::string DB_HOST = getEnvVar("DB_HOST", "localhost");
        inline const std::string DB_PORT = getEnvVar("DB_PORT", "5432");
        inline const std::string DB_NAME = getEnvVar("DB_NAME", "mydatabase");
        inline const std::string DB_USER = getEnvVar("DB_USER", "username");
        inline const std::string DB_PASSWORD = getEnvVar("DB_PASSWORD", "password");

        // Example: build a connection string for libpqxx
        inline const std::string buildConnectionString() {
            return "host=" + DB_HOST +
                   " port=" + DB_PORT +
                   " dbname=" + DB_NAME +
                   " user=" + DB_USER +
                   " password=" + DB_PASSWORD;
        }

        // Other config (e.g., server port, JWT secret)
        inline const int SERVER_PORT = std::stoi(getEnvVar("SERVER_PORT", "8080"));
        inline const std::string JWT_SECRET = getEnvVar("JWT_SECRET", "default_secret_key");
} // namespace Config