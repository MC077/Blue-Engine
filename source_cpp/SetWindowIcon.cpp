#include <windows.h>
#include <shellapi.h>

extern "C" void set_window_icon(const char* iconPath) {
    HWND hwnd = GetActiveWindow();

    HICON hIcon = (HICON)LoadImageA(
        NULL,
        iconPath,
        IMAGE_ICON,
        0,
        0,
        LR_LOADFROMFILE | LR_DEFAULTSIZE
    );

    if (hIcon) {
        SendMessage(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
        SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
    }
}
