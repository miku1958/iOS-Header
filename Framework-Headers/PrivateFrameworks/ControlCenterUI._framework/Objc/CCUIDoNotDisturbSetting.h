//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@class BBBehaviorOverride, BBSettingsGateway;

@interface CCUIDoNotDisturbSetting : CCUISettingModule
{
    BBSettingsGateway *_settingsGateway;
    BBBehaviorOverride *_activeOverride;
    long long _activeStatus;
    BOOL _DNDEnabled;
}

@property (nonatomic, getter=_isDNDEnabled, setter=_setDNDEnabled:) BOOL DNDEnabled; // @synthesize DNDEnabled=_DNDEnabled;

+ (id)displayName;
+ (id)identifier;
+ (id)statusOffString;
+ (id)statusOnString;
- (void).cxx_destruct;
- (BOOL)_isStateOverridden;
- (void)_setDNDEnabled:(BOOL)arg1 updateServer:(BOOL)arg2 source:(unsigned long long)arg3;
- (void)_setDNDStatus:(long long)arg1;
- (BOOL)_stateWithEffectiveOverrides;
- (void)_tearDown;
- (BOOL)_toggleState;
- (void)_updateActiveOverrides:(id)arg1;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)deactivate;
- (void)dealloc;
- (id)glyphImageForState:(int)arg1;
- (id)selectedStateColor;
- (id)statusUpdate;

@end
