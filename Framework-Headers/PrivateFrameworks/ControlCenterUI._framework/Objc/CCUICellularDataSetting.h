//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@interface CCUICellularDataSetting : CCUISettingModule
{
}

+ (id)displayName;
+ (id)identifier;
+ (BOOL)isInternalButton;
+ (BOOL)isSupported:(int)arg1;
+ (id)statusOffString;
+ (id)statusOnString;
- (BOOL)_isCellularDataRestricted;
- (BOOL)_toggleState;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)deactivate;
- (id)glyphImageForState:(int)arg1;
- (id)selectedStateColor;

@end

