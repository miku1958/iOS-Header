//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHTextStyle : NSObject
{
}

+ (BOOL)getDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(BOOL)arg4;
+ (const char *)name;
+ (struct __CFString *)platformCreateCssFontFamilyStringFromFontName:(struct __CFString *)arg1;
+ (BOOL)platformGetDefaultLineHeight:(struct __CTFont *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (void)platformGetTraitsFromFont:(struct __CTFont *)arg1 hasBold:(BOOL *)arg2 hasItalic:(BOOL *)arg3;
+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;

@end
