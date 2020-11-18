//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIKCalendarApplicationIcon : NSObject
{
}

+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;
+ (id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3;
+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;
+ (id)_dayNumberStringFromDateComponents:(id)arg1;
+ (void)_drawGridInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 calendar:(id)arg4 dayNumberString:(id)arg5 dateNameBlock:(CDUnknownBlockType)arg6 dateNameFormatType:(long long)arg7 format:(long long)arg8 showGrid:(BOOL)arg9;
+ (void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)arg1 context:(struct CGContext *)arg2 frame:(struct CGRect)arg3;
+ (long long)_iconDateNameFormatTypeForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (long long)_iconDateNameFormatTypeForNotificationsWithDate:(id)arg1 calendar:(id)arg2;
+ (id)_iconImageWithFormat:(int)arg1 square:(BOOL)arg2 outline:(BOOL)arg3 drawBlock:(CDUnknownBlockType)arg4;
+ (int)_iconVariantForFormat:(int)arg1 scale:(double)arg2 outline:(BOOL)arg3;
+ (double)_imageScaleForApplicationIconFormat:(int)arg1;
+ (BOOL)_isDate:(id)arg1 withinNextWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (BOOL)_isDate:(id)arg1 withinPreviousWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (BOOL)_isWithinNextWeek:(id)arg1 calendar:(id)arg2;
+ (BOOL)_isWithinPreviousWeek:(id)arg1 calendar:(id)arg2;
+ (id)_whiteImage;
+ (id)croppedIconImage:(id)arg1 format:(int)arg2;
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 date:(id)arg4 calendar:(id)arg5 format:(int)arg6;
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 dateComponents:(id)arg4 dateNameFormatType:(long long)arg5 format:(long long)arg6 showGrid:(BOOL)arg7;
+ (long long)dynamicIconFormat:(int)arg1;
+ (BOOL)formatSupportsDynamicIcon:(int)arg1;
+ (id)getMaskedIconImageWithFormat:(int)arg1 imageScale:(double)arg2;
+ (id)getUnmaskedIconImage:(int)arg1;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 outline:(BOOL)arg4;
+ (id)iconImageWithDateComponents:(id)arg1 dateNameFormatType:(long long)arg2 format:(int)arg3 square:(BOOL)arg4 showGrid:(BOOL)arg5;

@end

