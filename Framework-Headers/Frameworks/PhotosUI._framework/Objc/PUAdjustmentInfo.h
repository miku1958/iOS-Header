//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PUAdjustmentCustomBehavior;

__attribute__((visibility("hidden")))
@interface PUAdjustmentInfo : NSObject
{
    BOOL _enabled;
    NSString *_localizedName;
    NSString *_localizedSectionName;
    NSString *_iconName;
    double _defaultLevel;
    double _identityLevel;
    double _minimumLevel;
    double _maximumLevel;
    double _baseLevel;
    double _currentLevel;
    double _lastAdjustedLevel;
    NSString *_identifier;
    NSString *_adjustmentKey;
    NSString *_settingKey;
    id<PUAdjustmentCustomBehavior> _customSettingDelegate;
    NSString *_attributeKey;
}

@property (strong, nonatomic) NSString *adjustmentKey; // @synthesize adjustmentKey=_adjustmentKey;
@property (strong, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;
@property (nonatomic) double baseLevel; // @synthesize baseLevel=_baseLevel;
@property (nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
@property (strong, nonatomic) id<PUAdjustmentCustomBehavior> customSettingDelegate; // @synthesize customSettingDelegate=_customSettingDelegate;
@property (nonatomic) double defaultLevel; // @synthesize defaultLevel=_defaultLevel;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) double identityLevel; // @synthesize identityLevel=_identityLevel;
@property (nonatomic) double lastAdjustedLevel; // @synthesize lastAdjustedLevel=_lastAdjustedLevel;
@property (strong, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (strong, nonatomic) NSString *localizedSectionName; // @synthesize localizedSectionName=_localizedSectionName;
@property (nonatomic) double maximumLevel; // @synthesize maximumLevel=_maximumLevel;
@property (nonatomic) double minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property (readonly, nonatomic) double normalizedCurrentLevel;
@property (readonly, nonatomic) double normalizedDefaultLevel;
@property (strong, nonatomic) NSString *settingKey; // @synthesize settingKey=_settingKey;

- (void).cxx_destruct;
- (id)copy;
- (id)description;

@end
