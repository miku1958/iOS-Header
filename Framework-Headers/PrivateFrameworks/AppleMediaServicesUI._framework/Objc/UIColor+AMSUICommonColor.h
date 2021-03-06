//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (AMSUICommonColor)

@property (readonly, nonatomic, getter=ams_isDark) BOOL ams_dark;
@property (readonly, nonatomic, getter=ams_isLight) BOOL ams_light;
@property (readonly, nonatomic) double ams_luminance;

+ (id)ams_appTint;
+ (id)ams_clear;
+ (id)ams_componentBackground;
+ (id)ams_defaultLine;
+ (id)ams_dim;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;
+ (id)ams_mediaBorder;
+ (id)ams_placeholderBackground;
+ (id)ams_primaryBackground;
+ (id)ams_primaryGroupedBackground;
+ (id)ams_primaryText;
+ (id)ams_quaternaryText;
+ (id)ams_secondaryBackground;
+ (id)ams_secondaryGroupedBackground;
+ (id)ams_secondaryText;
+ (id)ams_shadow;
+ (id)ams_tertiaryText;
@end

