//-----------------------------------------------------------------------------
// ABOUT CONFIGURATION
//-----------------------------------------------------------------------------
// This is a configuration file for ImGui. It contains settings that control
// how ImGui behaves and compiles. This file is included before imgui.h

//-----------------------------------------------------------------------------
// Math Operators  
//-----------------------------------------------------------------------------
// ImGui math operators are defined when this is included before imgui.h
#define IMGUI_DEFINE_MATH_OPERATORS

//-----------------------------------------------------------------------------
// Platform/Renderer Customization
//-----------------------------------------------------------------------------
// You can customize the types used by ImGui by uncommenting/editing the lines below.
// Leave them commented to use the default types and behaviors.

// Platform functions
// #define IM_PLATFORM_DEFAULT_SETTINGS    1

//-----------------------------------------------------------------------------
// Compiler warnings
//-----------------------------------------------------------------------------
#ifdef _MSC_VER
    #pragma warning(disable: 4127)     // condition expression is constant
    #pragma warning(disable: 4251)     // 'identifier': class 'type' needs to have dll-interface to be used by clients of class 'type2'
    #pragma warning(disable: 4996)     // 'This function or variable may be unsafe': strcpy, strdup, sprintf, vsnprintf, sscanf, fopen
#endif

//-----------------------------------------------------------------------------
// Memory allocation
//-----------------------------------------------------------------------------
// By default ImGui will malloc/free. You can override this.
// #define IM_ALLOC(size) MyAlloc(size)
// #define IM_FREE(ptr)   MyFree(ptr)

//-----------------------------------------------------------------------------
// Configuration Options
//-----------------------------------------------------------------------------
// See imgui.h for more details on these options

// Enable docking
#define IMGUI_HAS_DOCK

// Disabled by default
// #define IMGUI_DISABLE_OBSOLETE_KEYIO          0    // 1.87+: disable io.KeyMap[]. was replaced by io.KeyMap[] and io.AddKeyEvent() and Key enum.

#endif
