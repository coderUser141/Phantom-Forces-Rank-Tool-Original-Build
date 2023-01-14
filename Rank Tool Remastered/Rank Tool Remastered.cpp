// Rank Tool Remastered.cpp : Defines the entry point for the application.
// mmmm chicken tendies i want them

//////// TO DO: add GUI'
// make windows classes for easier use



#include "framework.h"
#include "Rank Tool Remastered.h"


//conversion DLL
//#define LEAN
#include "Definitions.h"

//#include "../WeaponList/WeaponList.h"
#include "PFWeaponList2.h"


//functions DLL
//#include "../Functions/pch.h"


//#pragma comment(lib, "Release/Functions.lib")

#define MAX_LOADSTRING 100

// Global Variables:
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar texti
WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

    // Initialize global strings
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_RANKTOOLREMASTERED, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Perform application initialization:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_RANKTOOLREMASTERED));

    MSG msg;

    // Main message loop:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}

//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_RANKTOOLREMASTERED));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_RANKTOOLREMASTERED);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Store instance handle in our global variable

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE: Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Parse the menu selections:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_CREATE:
        {

            WinMenu(hWnd);
            break;

        }
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Add any drawing code that uses hdc here...
            EndPaint(hWnd, &ps);
            break;
        }
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

void WinMenu(HWND hWnd) {

    MENU = CreateMenu();

    HMENU Projects, RankTool;
    Projects = CreateMenu();//asshole pp poopoopoopoopoopoopoopooopoopoopoopoopoopoopoopoopoopoopooppoopppppppppppooopooballs
    RankTool = CreateMenu();

    std::string RankToolStr = "Rank Tool";
        std::string SUBRankToolStr1 = "Experience...";
            std::string SUB2RankToolStr1 = "";
            std::string SUB2RankToolStr2 = "";
        std::string SUBRankToolStr2 = "Credits...";
            std::string SUB3RankToolStr1 = "";
            std::string SUB3RankToolStr2 = "";
            //dominic fike - chicken tenders
            //maroon 5 - ladykiller
            //only fire - cameltoe shop
    std::string ProjectsStr = "Projects";
    LPCWSTR Proj_MENUPTR, RT_MENUPTR, RT_SUBMENUPTR1, RT_SUBMENUPTR2;
    cvt::convert(RankToolStr, RT_MENUPTR);
    cvt::convert(ProjectsStr, Proj_MENUPTR);
        cvt::convert(SUBRankToolStr1, RT_SUBMENUPTR1);
        cvt::convert(SUBRankToolStr2, RT_SUBMENUPTR2);
    

    AppendMenu(MENU, MF_POPUP, (UINT_PTR)RankTool, RT_MENUPTR);
        AppendMenu(RankTool, MF_STRING, NULL, RT_SUBMENUPTR1);
        AppendMenu(RankTool, MF_STRING, NULL, RT_SUBMENUPTR2);

    AppendMenu(MENU, MF_POPUP, (UINT_PTR)Projects, Proj_MENUPTR);
        

    SetMenu(hWnd, MENU);

    DrawMenuBar(hWnd);

}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {

        case WM_INITDIALOG:
        {

            return (INT_PTR)TRUE;
        
        }

        case WM_COMMAND:
        {
            if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
            {

                EndDialog(hDlg, LOWORD(wParam));
                return (INT_PTR)TRUE;
            
            }
            break;
        
        }

    
    }
    return (INT_PTR)FALSE;
}


INT_PTR CALLBACK Attribution(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {

        case WM_INITDIALOG:
        {

            return (INT_PTR)TRUE;

        }


        case WM_COMMAND:
        {

            if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {

                EndDialog(hDlg, LOWORD(wParam));
                return (INT_PTR)TRUE;

            }
            break;

        }

    }

    return (INT_PTR)FALSE;
}



namespace func {
    std::string errorMsg;
    void error(std::string error) {
        errorMsg = error;
    }

    inline unsigned long long rankToCredits(unsigned long long rank) {
        if (rank < 0) {
            error("Value limit subceeded");
            return -1;
        } else {
            return 200 + (5 * rank);
        }
    }

    inline unsigned long long creditsToRank(unsigned long long credits) {
        if (credits < 200) {
            error("Value limit subceeded");
            return -1;
        } else if ((credits % 5) > 0) {
            error("Value is indivisible by 5");
            return -1;
        } else {
            for (unsigned long long i = 200; i <= credits; i += 5) {
                if (credits == i) {
                    return (i - 200) / 5;
                }
            }
        }
    }

    inline unsigned long long rankToCreditsSummate(unsigned long long strtRank, unsigned long long trgtRank) {
        if (trgtRank < 0) {
            error("Value limit subceeded");
            return -1;
        } else {
            unsigned long long summation{ 0 };
            for (unsigned long long i = strtRank; i < trgtRank; i++) {
                summation += creditsToRank(trgtRank);
                if (i == trgtRank) {
                    return summation;
                }
            }
        }
    }

    inline unsigned long long XPCalculation(unsigned long long rank, unsigned long long rankProgress, unsigned long long target) {
        unsigned long long requirement{ 0 };
        if (target == 0 || target < 0 || rank < 0 || rankProgress < 0) {
            error("Value limit(s) subceeded");
            return -1;
        } else if (target <= rank || rankProgress > ((rank + 1) * 1000)) {
            error("Target already reached");
            return -1;
        } else {
            for (unsigned int i = 0; i < target; i++)requirement += i * 1000;
            for (unsigned int j = 0; j < rank; j++)requirement -= j * 1000;
            requirement -= rankProgress;
            return requirement;
        }
    }

    inline unsigned long long RankCalculation(unsigned long long xp, unsigned long long max = 5000050000000) {
        unsigned long long counter = 0;
        if (xp == 0) {
            return 0;
        } else if (counter < 0) {
            error("Value limit subceeded");
        } else if (counter > max) {
            error("Value limit exceeded");
        } else {
            for (unsigned long long i = 0; i < xp; i++) {
                counter += i * 1000;
                if (counter + ((i + 1) * 1000) > xp && counter <= xp) {
                    return i;
                    break;
                }
            }
            {
                //example: xp of 20100001 (rank 200 + 1 xp)
                //i counts up until 20100001 (the rank according WILL be inside that range)
                //counter counts up the ranks (1 = 1 000, 2 = 3 000, 3 = 6 000, 4 = 10 000... 199 = 19 900 000, 200 = 20 100 000, 201 = 20 301 000...)
                //if the target rank's next rank multiplied by 1000 added to the counter is greater than the xp, and the counter is less than or equal the xp, the target rank is found
                    /*
                    counter = 20 100 000, i = 200, xp = 20 100 001

                    (counter + ((i + 1) * 1000) > xp) && counter <= xp
                    = (20 100 000 + ((200 + 1) * 1000) > 20 100 001) && 20 100 000 <= 20 100 001
                    = (20 100 000 + (201) * 1000) > 20 100 001) && true
                    = (20 100 000 + 201 000) > 20 100 001 && true
                    = 20 301 000 > 20 100 001 && true
                    = true && true
                    = true
                    */
                    //the first argument goes under (and over, by checking if the xp is under the next rank) the xp, and the second one goes over it, sandwiching the xp in between
            }
        }
    }

}