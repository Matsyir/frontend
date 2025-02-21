// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: muxlaunch

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_scrLaunch
void ui_scrLaunch_screen_init(void);
lv_obj_t * ui_scrLaunch;
lv_obj_t * ui_pnlWall;
lv_obj_t * ui_imgWall;
lv_obj_t * ui_pnlBox;
lv_obj_t * ui_imgBox;
lv_obj_t * ui_pnlHeader;
lv_obj_t * ui_lblDatetime;
lv_obj_t * ui_lblTitle;
lv_obj_t * ui_conGlyphs;
lv_obj_t * ui_staBluetooth;
lv_obj_t * ui_staNetwork;
lv_obj_t * ui_staCapacity;
lv_obj_t * ui_pnlContent;
lv_obj_t * ui_lblContent;
lv_obj_t * ui_lblFavourites;
lv_obj_t * ui_lblHistory;
lv_obj_t * ui_lblApps;
lv_obj_t * ui_lblInfo;
lv_obj_t * ui_lblConfig;
lv_obj_t * ui_lblReboot;
lv_obj_t * ui_lblShutdown;
lv_obj_t * ui_pnlGlyph;
lv_obj_t * ui_icoContent;
lv_obj_t * ui_icoFavourites;
lv_obj_t * ui_icoHistory;
lv_obj_t * ui_icoApps;
lv_obj_t * ui_icoInfo;
lv_obj_t * ui_icoConfig;
lv_obj_t * ui_icoReboot;
lv_obj_t * ui_icoShutdown;
lv_obj_t * ui_pnlFooter;
lv_obj_t * ui_lblNavAGlyph;
lv_obj_t * ui_lblNavA;
lv_obj_t * ui_lblNavBGlyph;
lv_obj_t * ui_lblNavB;
lv_obj_t * ui_lblNavCGlyph;
lv_obj_t * ui_lblNavC;
lv_obj_t * ui_lblNavXGlyph;
lv_obj_t * ui_lblNavX;
lv_obj_t * ui_lblNavYGlyph;
lv_obj_t * ui_lblNavY;
lv_obj_t * ui_lblNavZGlyph;
lv_obj_t * ui_lblNavZ;
lv_obj_t * ui_lblNavMenuGlyph;
lv_obj_t * ui_lblNavMenu;
lv_obj_t * ui_pnlMessage;
lv_obj_t * ui_lblMessage;
lv_obj_t * ui_pnlHelp;
lv_obj_t * ui_pnlHelpMessage;
lv_obj_t * ui_lblHelpHeader;
lv_obj_t * ui_lblHelpContent;
lv_obj_t * ui_pnlProgressBrightness;
lv_obj_t * ui_icoProgressBrightness;
lv_obj_t * ui_barProgressBrightness;
lv_obj_t * ui_pnlProgressVolume;
lv_obj_t * ui_icoProgressVolume;
lv_obj_t * ui_barProgressVolume;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    ui_scrLaunch_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_scrLaunch);
}
