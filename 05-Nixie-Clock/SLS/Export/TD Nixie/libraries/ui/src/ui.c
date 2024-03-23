// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: TD Nixie

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_num_0;
lv_obj_t *ui_num_00;
lv_obj_t *ui_num_000;
lv_obj_t *ui_num_0000;
lv_obj_t *ui_num_1;
lv_obj_t *ui_num_2;
lv_obj_t *ui_num_3;
lv_obj_t *ui_num_4;
lv_obj_t *ui_num_5;
lv_obj_t *ui_num_6;
lv_obj_t *ui_num_7;
lv_obj_t *ui_num_8;
lv_obj_t *ui_num_9;
lv_obj_t *ui_colon;
lv_obj_t *ui_img_bg;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_[10] = {&ui_img_numbers_0_png, &ui_img_numbers_1_png, &ui_img_numbers_2_png, &ui_img_numbers_3_png, &ui_img_numbers_4_png, &ui_img_numbers_5_png, &ui_img_numbers_6_png, &ui_img_numbers_7_png, &ui_img_numbers_8_png, &ui_img_numbers_9_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
