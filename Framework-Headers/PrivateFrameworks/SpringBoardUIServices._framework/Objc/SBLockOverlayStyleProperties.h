//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tintColor;
    double _tintAlpha;
    double _blurRadius;
    unsigned long long _style;
    long long _quality;
    _UIBackdropViewSettings *_settings;
}

@property (readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property (readonly, nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_quality;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property (readonly, strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void)_configure;
- (id)_settingsForStyle;
- (id)_stringForQuality;
- (id)_stringForStyle;
- (void)dealloc;
- (id)description;
- (id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2;

@end

