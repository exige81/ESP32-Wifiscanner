#define DEFAULT_HOSTNAME "ESP32WIFISCAN"
#define DEFAULT_USERNAME "esp32wifi"
#define DEFAULT_PASSWORD "esp32wifi"

#define WIFI_SCAN_PATH "/wifiscan"
#define ROOT_PATH "/"

#define DebugPort Serial
#define DBG_PRINTF(...) DebugPort.printf(__VA_ARGS__)
#define DBG_PRINT(...) DebugPort.print(__VA_ARGS__)
