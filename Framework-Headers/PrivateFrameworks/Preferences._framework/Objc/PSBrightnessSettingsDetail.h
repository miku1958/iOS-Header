//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)autoBrightnessEnabled;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(CDUnknownBlockType)arg1 changedAction:(CDUnknownBlockType)arg2;
+ (double)currentValue;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (id)iconImage;
+ (void)incrementBrightnessValue:(double)arg1;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (id)preferencesURL;
+ (void)setAutoBrightnessEnabled:(BOOL)arg1;
+ (void)setValue:(double)arg1;

@end

