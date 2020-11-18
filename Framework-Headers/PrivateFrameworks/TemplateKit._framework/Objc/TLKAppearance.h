//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface TLKAppearance : NSObject
{
    BOOL _isDark;
    BOOL _isVibrant;
    unsigned long long _style;
    NSString *_name;
    id _compositingFilter;
    double _accessibilityContrastColorBoost;
}

@property (readonly) double accessibilityContrastColorBoost; // @synthesize accessibilityContrastColorBoost=_accessibilityContrastColorBoost;
@property (readonly) UIColor *backgroundColor;
@property (readonly) id compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property (readonly) UIColor *groupedBackgroundColor;
@property (readonly) BOOL isDark; // @synthesize isDark=_isDark;
@property (readonly) BOOL isVibrant; // @synthesize isVibrant=_isVibrant;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) UIColor *platterColor;
@property (readonly) UIColor *primaryButtonColor;
@property (readonly) UIColor *primaryColor;
@property (readonly) UIColor *quaternaryButtonColor;
@property (readonly) UIColor *quaternaryColor;
@property (readonly) UIColor *secondaryButtonColor;
@property (readonly) UIColor *secondaryColor;
@property (readonly) unsigned long long style; // @synthesize style=_style;
@property (readonly) UIColor *tertiaryButtonColor;
@property (readonly) UIColor *tertiaryColor;

+ (id)allAppearances;
+ (id)appearanceWithStyle:(unsigned long long)arg1;
+ (id)bestAppearanceForSystem;
+ (id)bestAppearanceForTraitCollection:(id)arg1;
+ (id)bestAppearanceForView:(id)arg1;
+ (id)colorWithRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3;
+ (void)disableAppearanceOverrideForView:(id)arg1;
+ (BOOL)viewHasOverriddenAppearance:(id)arg1;
- (void).cxx_destruct;
- (id)buttonColorForProminence:(unsigned long long)arg1;
- (id)colorForProminence:(unsigned long long)arg1;
- (id)colorWithWhite:(unsigned long long)arg1;
- (id)colorWithWhite:(unsigned long long)arg1 highContrastWhite:(unsigned long long)arg2;
- (void)disableAppearanceForView:(id)arg1;
- (void)enableAppearanceForContainer:(id)arg1;
- (void)enableAppearanceForView:(id)arg1;
- (void)overrideAppearanceForView:(id)arg1;
- (id)textColorForColor:(long long)arg1;

@end
