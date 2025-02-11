// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: PTspj

#ifndef _PTSPJ_UI_H
#define _PTSPJ_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void SecRotation_Animation( lv_obj_t *TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_img_focus_sec;
extern lv_obj_t *ui_img_break_sec;
extern lv_obj_t *ui_img_face;
extern lv_obj_t *ui_label_focus;
extern lv_obj_t *ui_label_break;
extern lv_obj_t *ui_label_focus_title;
extern lv_obj_t *ui_label_focus_break;
extern lv_obj_t *ui_label_cycle;
extern lv_obj_t *ui_img_start_pause;
extern lv_obj_t *ui_img_reset;
extern lv_obj_t *ui_img_pause;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_elements_focus_sec_png);   // assets/elements/focus sec.png
LV_IMG_DECLARE( ui_img_elements_break_sec_png);   // assets/elements/break sec.png
LV_IMG_DECLARE( ui_img_elements_face_png);   // assets/elements/face.png
LV_IMG_DECLARE( ui_img_elements_start_png);   // assets/elements/start.png
LV_IMG_DECLARE( ui_img_elements_reset_png);   // assets/elements/reset.png
LV_IMG_DECLARE( ui_img_elements_pause_png);   // assets/elements/pause.png
LV_IMG_DECLARE( ui_img_elements_yt_png);   // assets/elements/yt.png


LV_FONT_DECLARE( ui_font_be110);
LV_FONT_DECLARE( ui_font_be20);
LV_FONT_DECLARE( ui_font_be75);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
