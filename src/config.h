// This string is what you'll see advertised in the Bluetooth pairing screen on your phone
#define BT_DEVICE_NAME "BimmerTunes"

// 0 - SBC only, 1 - enable AptX, 4 - enable AAC, 7 - enable APTX and AAC
#define BT_CODEC "7"

// Setting this to 1 will mean that when the system boots, it will search for your existing paired device and auto reconnect
#define BT_AUTO_RECONNECT "1"

// Choices 0 - analog left/right channel output. Use this for Non-DSP systems or DSP systems with an adapter. Possibly value 1 works for DSP systems and does not require an adapter
#define BT_AUDIO_OUTPUT "0"