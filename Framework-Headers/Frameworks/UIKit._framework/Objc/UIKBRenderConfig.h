//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying>
{
    BOOL _useEmojiStyles;
    BOOL _lightKeyboard;
    BOOL _isFloating;
    long long _forceQuality;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
    NSString *_controlKeyBackgroundName;
    NSString *_activatedKeyplaneSwitchControlKeyBackgroundName;
    _UIButtonBarButtonVisualProvider *_buttonBarVisualProvider;
}

@property (nonatomic) NSString *activatedKeyplaneSwitchControlKeyBackgroundName; // @synthesize activatedKeyplaneSwitchControlKeyBackgroundName=_activatedKeyplaneSwitchControlKeyBackgroundName;
@property (readonly, nonatomic) long long backdropStyle;
@property (readonly, nonatomic) long long blurEffectStyle;
@property (nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property (nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property (readonly, nonatomic) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider; // @synthesize buttonBarVisualProvider=_buttonBarVisualProvider;
@property (nonatomic) NSString *controlKeyBackgroundName; // @synthesize controlKeyBackgroundName=_controlKeyBackgroundName;
@property (nonatomic) long long forceQuality; // @synthesize forceQuality=_forceQuality;
@property (nonatomic) BOOL isFloating; // @synthesize isFloating=_isFloating;
@property (nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property (nonatomic) BOOL lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property (nonatomic) double lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property (readonly, nonatomic) BOOL whiteText;

+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
