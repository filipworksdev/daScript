// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

auto ann_Time = make_smart<sf_Time_GeneratedAnnotation>(lib);
addAnnotation(ann_Time);
auto ann_Clock = make_smart<sf_Clock_GeneratedAnnotation>(lib);
addAnnotation(ann_Clock);
auto ann_InputStream = make_smart<sf_InputStream_GeneratedAnnotation>(lib);
addAnnotation(ann_InputStream);
auto ann_NonCopyable = make_smart<sf_NonCopyable_GeneratedAnnotation>(lib);
addAnnotation(ann_NonCopyable);
auto ann_FileInputStream = make_smart<sf_FileInputStream_GeneratedAnnotation>(lib);
addAnnotation(ann_FileInputStream);
auto ann_Lock = make_smart<sf_Lock_GeneratedAnnotation>(lib);
addAnnotation(ann_Lock);
auto ann_MemoryInputStream = make_smart<sf_MemoryInputStream_GeneratedAnnotation>(lib);
addAnnotation(ann_MemoryInputStream);
auto ann_Mutex = make_smart<sf_Mutex_GeneratedAnnotation>(lib);
addAnnotation(ann_Mutex);
auto ann_Thread = make_smart<sf_Thread_GeneratedAnnotation>(lib);
addAnnotation(ann_Thread);
auto ann_ThreadFunc = make_smart<sf_priv_ThreadFunc_GeneratedAnnotation>(lib);
addAnnotation(ann_ThreadFunc);
auto ann_ThreadLocal = make_smart<sf_ThreadLocal_GeneratedAnnotation>(lib);
addAnnotation(ann_ThreadLocal);
auto ann_Clipboard = make_smart<sf_Clipboard_GeneratedAnnotation>(lib);
addAnnotation(ann_Clipboard);
auto ann_GlResource = make_smart<sf_GlResource_GeneratedAnnotation>(lib);
addAnnotation(ann_GlResource);
auto ann_ContextSettings = make_smart<sf_ContextSettings_GeneratedAnnotation>(lib);
addAnnotation(ann_ContextSettings);
auto ann_Context = make_smart<sf_Context_GeneratedAnnotation>(lib);
addAnnotation(ann_Context);
auto ann_Cursor = make_smart<sf_Cursor_GeneratedAnnotation>(lib);
addAnnotation(ann_Cursor);
auto ann_Identification = make_smart<sf_Joystick_Identification_GeneratedAnnotation>(lib);
addAnnotation(ann_Identification);
auto ann_Joystick = make_smart<sf_Joystick_GeneratedAnnotation>(lib);
addAnnotation(ann_Joystick);
auto ann_Keyboard = make_smart<sf_Keyboard_GeneratedAnnotation>(lib);
addAnnotation(ann_Keyboard);
auto ann_Mouse = make_smart<sf_Mouse_GeneratedAnnotation>(lib);
addAnnotation(ann_Mouse);
auto ann_Sensor = make_smart<sf_Sensor_GeneratedAnnotation>(lib);
addAnnotation(ann_Sensor);
auto ann_SizeEvent = make_smart<sf_Event_SizeEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_SizeEvent);
auto ann_KeyEvent = make_smart<sf_Event_KeyEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_KeyEvent);
auto ann_TextEvent = make_smart<sf_Event_TextEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_TextEvent);
auto ann_MouseMoveEvent = make_smart<sf_Event_MouseMoveEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_MouseMoveEvent);
auto ann_MouseButtonEvent = make_smart<sf_Event_MouseButtonEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_MouseButtonEvent);
auto ann_MouseWheelEvent = make_smart<sf_Event_MouseWheelEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_MouseWheelEvent);
auto ann_MouseWheelScrollEvent = make_smart<sf_Event_MouseWheelScrollEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_MouseWheelScrollEvent);
auto ann_JoystickConnectEvent = make_smart<sf_Event_JoystickConnectEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_JoystickConnectEvent);
auto ann_JoystickMoveEvent = make_smart<sf_Event_JoystickMoveEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_JoystickMoveEvent);
auto ann_JoystickButtonEvent = make_smart<sf_Event_JoystickButtonEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_JoystickButtonEvent);
auto ann_TouchEvent = make_smart<sf_Event_TouchEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_TouchEvent);
auto ann_SensorEvent = make_smart<sf_Event_SensorEvent_GeneratedAnnotation>(lib);
addAnnotation(ann_SensorEvent);
auto ann_Event = make_smart<sf_Event_GeneratedAnnotation>(lib);
addAnnotation(ann_Event);
auto ann_Touch = make_smart<sf_Touch_GeneratedAnnotation>(lib);
addAnnotation(ann_Touch);
auto ann_VideoMode = make_smart<sf_VideoMode_GeneratedAnnotation>(lib);
addAnnotation(ann_VideoMode);
auto ann_Vulkan = make_smart<sf_Vulkan_GeneratedAnnotation>(lib);
addAnnotation(ann_Vulkan);
auto ann_WindowBase = make_smart<sf_WindowBase_GeneratedAnnotation>(lib);
addAnnotation(ann_WindowBase);
auto ann_Window = make_smart<sf_Window_GeneratedAnnotation>(lib);
addAnnotation(ann_Window);
setParents(this,"FileInputStream",  {"InputStream"});
setParents(this,"WindowBase",  {"NonCopyable"});
setParents(this,"Cursor",  {"NonCopyable"});
setParents(this,"Lock",  {"NonCopyable"});
setParents(this,"Window",  {"WindowBase","NonCopyable"});
setParents(this,"Context",  {"GlResource"});
setParents(this,"MemoryInputStream",  {"InputStream"});
setParents(this,"Mutex",  {"NonCopyable"});
setParents(this,"Thread",  {"NonCopyable"});
setParents(this,"ThreadLocal",  {"NonCopyable"});