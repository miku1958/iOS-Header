//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class NSMutableDictionary, NSMutableSet;

@interface BRInterfaceKeyboard : BRInterface
{
    struct __IOHIDEventSystemClient *_client;
    NSMutableDictionary *_propertyCache;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    BOOL _isReady;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
    NSMutableSet *_services;
}

@property (readonly, nonatomic) NSMutableSet *services; // @synthesize services=_services;

+ (id)interface;
- (BOOL)_disableState:(unsigned long long)arg1;
- (BOOL)_enableState:(unsigned long long)arg1;
- (void)_findServices;
- (BOOL)_servicesSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)_setCachedPropertiesOnService:(struct __IOHIDServiceClient *)arg1;
- (BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id *)arg3;
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

