//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class NSMutableArray;

@interface BRInterfaceLegacy : BRInterface
{
    BOOL _isReady;
    struct __IOHIDEventSystemClient *_client;
    NSMutableArray *_services;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _doubleTapTimeoutUs;
    unsigned long long _tripleTapTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    BOOL _tapOnly;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
}

@property (nonatomic) BOOL tapOnly; // @synthesize tapOnly=_tapOnly;

+ (BOOL)_isTapState:(unsigned long long)arg1;
+ (id)interface;
- (BOOL)_disableState:(unsigned long long)arg1;
- (BOOL)_enableState:(unsigned long long)arg1;
- (BOOL)_findServices:(CDUnknownBlockType)arg1;
- (BOOL)_servicesSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_setDefaultServiceProperties;
- (void)dealloc;
- (id)description;
- (BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id *)arg3;
- (BOOL)enableStates:(id)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)isReady;
- (unsigned long long)maxAssetSlots;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (BOOL)setGlobalConfigs:(id)arg1 error:(id *)arg2;
- (unsigned long long)unusedAssetSlots;

@end

